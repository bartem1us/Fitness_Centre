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
    void on_SeasonTicket_1_Clicked();
    void on_SeasonTicket_2_Clicked();
    void on_SeasonTicket_3_Clicked();
    void on_Coach_1_Clicked();
    void on_Coach_2_Clicked();
    void on_Coach_3_Clicked();
    void fillBasketSeasonTicket(const std::string& Price,const std::string& SeasonTicketText);
    void fillBasketCoaches(const std::string CoachNameText);
    void leaveComment();
    void on_Purchase_Clicked();

private:
    Ui::MainWindow *ui;
    QString _fullname;
    QString _number;
    std::shared_ptr<PostgreSQLConnection> pg;

};

#endif // MAINWINDOW_H
