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
    connect(ui->SeasonTicket_1,&QPushButton::clicked,this,&MainWindow::on_SeasonTicket_1_Clicked);
    connect(ui->SeasonTicket_2,&QPushButton::clicked,this,&MainWindow::on_SeasonTicket_2_Clicked);
    connect(ui->SeasonTicket_3,&QPushButton::clicked,this,&MainWindow::on_SeasonTicket_3_Clicked);

    connect(ui->Choose_Button_1,&QPushButton::clicked,this,&MainWindow::on_Coach_1_Clicked);
    connect(ui->Choose_Button_2,&QPushButton::clicked,this,&MainWindow::on_Coach_2_Clicked);
    connect(ui->Choose_Button_3,&QPushButton::clicked,this,&MainWindow::on_Coach_3_Clicked);
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

void MainWindow::fillBasketCoaches(const std::string CoachNameText)
{
    QLineEdit *CoachName = ui->tab_4->findChild<QLineEdit*>("CoachName");
    if(!CoachName)
    {
        CoachName = new QLineEdit(ui->tab_4);
        CoachName->setObjectName("CoachName");
        CoachName->setGeometry(380,210,370,31);
        CoachName->setStyleSheet("QLineEdit { color: white; background-color: rgb(39, 39, 39); }");
        QFont font("Arial", 12);
        CoachName->setFont(font);
        CoachName->setAlignment(Qt::AlignHCenter);
        CoachName->setText(CoachNameText.c_str());

        QPushButton* CrossButton = new QPushButton(ui->tab_4);
        CrossButton->setGeometry(310, 210, 41, 29);
        CrossButton->setObjectName("Cross_2");
        CrossButton->setFlat(true);
        CrossButton->setStyleSheet("QPushButton {image: url(:/icons/icons/cross.svg);}");



    }
    else
    {
        CoachName->setText(CoachNameText.c_str());
    }

}

void MainWindow::on_Coach_1_Clicked()
{
    fillBasketCoaches("Ваш тренер: Сергей - Тяжёлая Атлетика");
}

void MainWindow::on_Coach_2_Clicked()
{
    fillBasketCoaches("Ваш тренер: Геннадий - Гибкость");
}

void MainWindow::on_Coach_3_Clicked()
{
    fillBasketCoaches("Ваш тренер: Иван - Мотивация");
}


void MainWindow::fillBasketSeasonTicket(const std::string& Price,const std::string& SeasonTicketText)
{
    QLineEdit *SeasonTicketName = ui->tab_4->findChild<QLineEdit*>("SeasonTicketName");
    QLineEdit *SeasonTicketPrice= ui->tab_4->findChild<QLineEdit*>("SeasonTicketPrice");
    if (!SeasonTicketName) {
        SeasonTicketName = new QLineEdit(ui->tab_4);
        SeasonTicketName->setObjectName("SeasonTicketName");
        SeasonTicketName->setGeometry(380, 140, 241, 31);
        SeasonTicketName->setStyleSheet("QLineEdit { color: white; background-color: rgb(39, 39, 39); }");
        QFont font("Arial", 12);
        SeasonTicketName->setFont(font);
        SeasonTicketName->setAlignment(Qt::AlignHCenter);
        SeasonTicketName->setText(SeasonTicketText.c_str());

        SeasonTicketPrice = new QLineEdit(ui->tab_4);
        SeasonTicketPrice->setGeometry(650, 140, 100, 31);
        SeasonTicketPrice->setObjectName("SeasonTicketPrice");
        SeasonTicketPrice->setStyleSheet("QLineEdit { color: white; background-color: rgb(39, 39, 39); }");
        SeasonTicketPrice->setFont(font);
        SeasonTicketPrice->setAlignment(Qt::AlignHCenter);
        SeasonTicketPrice->setText(Price.c_str());


        QPushButton* CrossButton = new QPushButton(ui->tab_4);
        CrossButton->setGeometry(310, 140, 41, 29);
        CrossButton->setObjectName("Cross");
        CrossButton->setFlat(true);
        CrossButton->setStyleSheet("QPushButton {image: url(:/icons/icons/cross.svg);}");

        ui->BuyButton->setText("Оплатить");
    }
    else
    {
        SeasonTicketName->setText(SeasonTicketText.c_str());
        SeasonTicketPrice->setText(Price.c_str());
    }
}

void MainWindow::on_SeasonTicket_1_Clicked()
{
    fillBasketSeasonTicket("2500 ₽","Абонемент: Индивидуальный");
}

void MainWindow::on_SeasonTicket_2_Clicked()
{
    fillBasketSeasonTicket("1690 ₽","Абонемент: 5+1 бесплатно");
}

void MainWindow::on_SeasonTicket_3_Clicked()
{
    fillBasketSeasonTicket("1190 ₽","Абонемент: Молодёжь Москвы");
}





MainWindow::~MainWindow()
{
    delete ui;
}
