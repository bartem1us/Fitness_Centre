#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "registration.h"
#include "query.h"
login::login(QWidget *parent ,
             std::shared_ptr<PostgreSQLConnection> pg)
    : QWidget(parent)
    , ui(new Ui::login)
    , pg(pg)
{
    ui->setupUi(this);
    connect(ui->toolButton_2, &QToolButton::clicked, this, &login::on_LoginButton_clicked);
    connect(ui->toolButton, &QToolButton::clicked, this, &login::on_RegButton_clicked);
    connect(ui->radioButton, &QRadioButton::clicked, this, &login::on_PasswordVisionButton_clicked);
}

QString hashPassword(const QString &password)
{
    QByteArray passwordBytes = password.toUtf8();

    // Вычисляем хэш SHA-256 для массива байт
    QByteArray hashBytes = QCryptographicHash::hash(passwordBytes, QCryptographicHash::Sha256);

    // Преобразуем массив байт хэша обратно в строку hex-представления
    QString hashResult = QString(hashBytes.toHex());

    return hashResult;
}

void login::on_LoginButton_clicked()
{


    // При нажатии на кнопку "OK" создаем главное окно и отображаем его

    QString number = ui->lineEdit->text();
    QString password_hash = hashPassword(ui->lineEdit_2->text());

    std::unique_ptr<PGresult,decltype(&PQclear)> res(PQexec(pg->getConnection().get(),
                                                              query::get_user(number.toStdString(),
                                                                              password_hash.toStdString()).c_str()),
                                                      PQclear);

    bool a =PQresultStatus(res.get()) != PGRES_TUPLES_OK;
    int numRows = PQntuples(res.get());
    std::string foundName = PQgetvalue(res.get(), 0, PQfnumber(res.get(), "fullname"));
    bool foundIsAdmin = static_cast<bool>(PQgetvalue(res.get(), 0, PQfnumber(res.get(), "is_admin")));

    // Закрываем окно входа
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();

}

void login::on_RegButton_clicked()
{

    Registration *reg = new Registration(nullptr , std::make_shared<PostgreSQLConnection>());
    reg->show();
    // Закрываем окно входа
    this->close();
}
void login::on_PasswordVisionButton_clicked()
{
    if (ui->lineEdit_2->echoMode() == QLineEdit::Password) {
        // Если пароль скрыт, отображаем его
        ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
    } else {
        // Если пароль отображается, скрываем его
        ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    }
}

login::~login()
{
    delete ui;
}
