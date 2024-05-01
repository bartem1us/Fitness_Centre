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
    MainWindow(const QString& fullname ,const QString& number , QWidget*parent = nullptr);
    ~MainWindow();
private slots:
    void on_RightButtonClicked();
    void on_LeftButtonClicked();

private:
    Ui::MainWindow *ui;
    QString _fullname;
    QString _number;
    std::shared_ptr<PostgreSQLConnection> pg;

};

#endif // MAINWINDOW_H
