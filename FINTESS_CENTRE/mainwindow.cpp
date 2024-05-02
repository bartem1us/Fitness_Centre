#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Right_button_page_1, &QPushButton::clicked, this, &MainWindow::on_RightButtonClicked);
    connect(ui->Right_button_page_2,&QPushButton::clicked, this, &MainWindow::on_RightButtonClicked);
    connect(ui->Right_button_page_3,&QPushButton::clicked, this, &MainWindow::on_RightButtonClicked);
    connect(ui->Left_button_page_1,&QPushButton::clicked, this, &MainWindow::on_LeftButtonClicked);
    connect(ui->Left_button_page_2,&QPushButton::clicked, this, &MainWindow::on_LeftButtonClicked);
    connect(ui->Left_button_page_3,&QPushButton::clicked, this, &MainWindow::on_LeftButtonClicked);
}

MainWindow::MainWindow(const QString& fullname ,const QString& number ,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,_fullname(fullname)
    ,_number(number)
{
    ui->setupUi(this);
    ui->PhoneNumber->setText(number);
    ui->FullName->setText(fullname);
    connect(ui->Right_button_page_1, &QPushButton::clicked, this, &MainWindow::on_RightButtonClicked);
    connect(ui->Right_button_page_2,&QPushButton::clicked, this, &MainWindow::on_RightButtonClicked);
    connect(ui->Right_button_page_3,&QPushButton::clicked, this, &MainWindow::on_RightButtonClicked);
    connect(ui->Left_button_page_1,&QPushButton::clicked, this, &MainWindow::on_LeftButtonClicked);
    connect(ui->Left_button_page_2,&QPushButton::clicked, this, &MainWindow::on_LeftButtonClicked);
    connect(ui->Left_button_page_3,&QPushButton::clicked, this, &MainWindow::on_LeftButtonClicked);
    connect(ui->SeasonTicket_1,&QToolButton::clicked,this,&MainWindow::on_SeasonTicket_1_Clicked);

}
void MainWindow::on_LeftButtonClicked()
{
    int currentIndex = ui->stackedWidget->currentIndex();
    int nextPageIndex = (currentIndex - 1);
    if(nextPageIndex == -1){
        nextPageIndex = ui->stackedWidget->count() - 1;// Получаем индекс следующей страницы, зацикливаясь при достижении конца
    }

    ui->stackedWidget->setCurrentIndex(nextPageIndex);
}
void MainWindow::on_RightButtonClicked()
{

    int currentIndex = ui->stackedWidget->currentIndex();
    int nextPageIndex = (currentIndex + 1) % ui->stackedWidget->count(); // Получаем индекс следующей страницы, зацикливаясь при достижении конца
    ui->stackedWidget->setCurrentIndex(nextPageIndex); // Устанавливаем текущую страницу

}

void MainWindow::on_SeasonTicket_1_Clicked()
{
    QLineEdit *lineEdit = new QLineEdit(ui->tab_4);
    lineEdit->setGeometry(10, 10, 100, 20); // Установка позиции и размеров QLineEdit
    lineEdit->setStyleSheet("QLineEdit { color: white; background-color: rgb(39, 39, 39); }");
    lineEdit->setText("Индивидуальный");
}

MainWindow::~MainWindow()
{
    delete ui;
}
