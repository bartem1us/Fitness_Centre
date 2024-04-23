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
    connect(ui->pushButton, &QPushButton::clicked, this, &Registration::on_RegButton_clicked);

}

void Registration::on_RegButton_clicked()
{
    QString number = ui->lineEdit_3->text();
    QString surname = ui->lineEdit->text();
    QString name = ui->lineEdit_2->text();
    QString password_hash = hashPassword(ui->lineEdit_4->text());


    PQexec(pg->getConnection().get(), query::insert_user(name.toStdString() ,surname.toStdString()
                                                   ,number.toStdString() , password_hash.toStdString()).c_str());


    // При нажатии на кнопку "OK" создаем главное окно и отображаем его

    MainWindow *mainWindow = new MainWindow(name+" "+surname,number);
    mainWindow->show();
    // Закрываем окно входа
    this->close();
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
