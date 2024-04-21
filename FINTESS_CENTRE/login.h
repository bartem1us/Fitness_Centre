#ifndef LOGIN_H
#define LOGIN_H
#include <QWidget>
#include <libpq-fe.h>
#include "pgconnection.h"
#include <memory>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr,
                   std::shared_ptr<PostgreSQLConnection> pg = nullptr);
    ~login();
private slots:
    void on_LoginButton_clicked();
    void on_RegButton_clicked();
    void on_PasswordVisionButton_clicked();
private:
    Ui::login *ui;
    std::shared_ptr<PostgreSQLConnection> pg;

};

#endif // LOGIN_H
