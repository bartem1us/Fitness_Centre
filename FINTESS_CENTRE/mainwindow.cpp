#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::MainWindow(const QString& fullname ,const QString& number ,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,_fullname(fullname)
    ,_number(number)
{
    ui->setupUi(this);
}



MainWindow::~MainWindow()
{
    delete ui;
}
