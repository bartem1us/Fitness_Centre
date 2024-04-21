#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::MainWindow(QString name , QString surname,QString number , QString hash_password ,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,_name(name)
    ,_surname(surname)
    ,_number(number)
    ,_hash_password(hash_password)
{
    ui->setupUi(this);
}



MainWindow::~MainWindow()
{
    delete ui;
}
