#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QWidget>
#include <QCoreApplication>
#include <QCryptographicHash>
#include <QDebug>
#include <libpq-fe.h>
#include "pgconnection.h"
#include "apiclient.h"
#include <memory>
//C:\DB_FINTESS_CENTRE\build-FINTESS_CENTRE-Desktop_Qt_6_6_3_MinGW_64_bit-Debug\FINTESS_CENTRE_autogen\EWIEGA46WW\moc_loginwindow.cpp
namespace Ui {
class Registration;
}

class Registration : public QWidget
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr
                          , std::shared_ptr<PostgreSQLConnection> pg = nullptr);
    ~Registration();

private:
    Ui::Registration *ui;
    std::unique_ptr<ApiClient> apiClient;


private slots:
    void on_RegButton_clicked();
    QString hashPassword(const QString &password);
};

#endif // REGISTRATION_H
