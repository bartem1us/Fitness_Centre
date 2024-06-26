#include "registration.h"
#include "ui_registration.h"
#include "mainwindow.h"
#include "query.h"

Registration::Registration(QWidget *parent , std::shared_ptr<PostgreSQLConnection> pg)
    : QWidget(parent)
    , ui(new Ui::Registration)
    , pg(pg)
{
    ui->setupUi(this);
    connect(ui->regButton, &CustomButton::clicked, this, &Registration::on_RegButton_clicked);

}

void Registration::on_RegButton_clicked()
{
    ui->regButton->animation_for_button();
    QString number = ui->lineEdit_3->text();
    QString surname = ui->lineEdit->text();
    QString name = ui->lineEdit_2->text();
    QString password_hash = hashPassword(ui->lineEdit_4->text());
    if (number.isEmpty() || number == "+ ()   ")
    {
        ui->warningMessage->setText("заполнение формы номер телефона: обязательно");
    }
    else if(name.isEmpty())
    {
        ui->warningMessage->setText("заполнение формы имя: обязательно");
    }
    else if(surname.isEmpty())
    {
        ui->warningMessage->setText("заполнение формы фамилия: обязательно");
    }
    else if (password_hash.isEmpty())
    {
        ui->warningMessage->setText("заполнение пароля: обязательно");
    }
    else
    {

        PQexec(pg->getConnection().get(), query::insert_user(name.toStdString() ,surname.toStdString()
                                                   ,number.toStdString() , password_hash.toStdString()).c_str());

        MainWindow *mainWindow = new MainWindow(name+" "+surname,number);
        mainWindow->show();
        this->close();
    }
}
QString Registration::hashPassword(const QString &password)
{
    QByteArray passwordBytes = password.toUtf8();

    // Вычисляем хэш SHA-256 для массива байт
    QByteArray hashBytes = QCryptographicHash::hash(passwordBytes, QCryptographicHash::Sha256);

    // Преобразуем массив байт хэша обратно в строку hex-представления
    QString hashResult = QString(hashBytes.toHex());

    return hashResult;
}

Registration::~Registration()
{
    delete ui;
}
