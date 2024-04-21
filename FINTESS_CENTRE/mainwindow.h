#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pgconnection.h"
#include <memory>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    MainWindow(QString name , QString surname,QString number , QString hash_password , QWidget*parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString _name;
    QString _surname;
    QString _number;
    QString _hash_password;
    std::shared_ptr<PostgreSQLConnection> pg;

};

#endif // MAINWINDOW_H
