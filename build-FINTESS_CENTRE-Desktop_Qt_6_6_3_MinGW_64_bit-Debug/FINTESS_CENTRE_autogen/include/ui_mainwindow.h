/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QWidget *tab_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit_8;
    QTextEdit *textEdit_9;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_2;
    QPushButton *Left_button_page_1;
    QPushButton *Right_button_page_1;
    QPushButton *push_button;
    QWidget *page_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_6;
    QTextEdit *textEdit_12;
    QTextEdit *textEdit_11;
    QPushButton *Right_button_page_2;
    QLineEdit *lineEdit_7;
    QPushButton *Left_button_page_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_11;
    QWidget *page_3;
    QPushButton *Left_button_page_3;
    QPushButton *Right_button_page_3;
    QTextEdit *textEdit_14;
    QTextEdit *textEdit_13;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_11;
    QLabel *label_6;
    QLineEdit *lineEdit_12;
    QLabel *label_5;
    QPushButton *pushButton_10;
    QWidget *tab_3;
    QWidget *tab_4;
    QTextEdit *textEdit_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1161, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 30, 1031, 601));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName("tab");
        tab->setStyleSheet(QString::fromUtf8("QWidget#tab{\n"
"	background-repeat: no-repeat;\n"
"	background-image: url(C:/DB_FINTESS_CENTRE/FINTESS_CENTRE/fitnes_image.jpg);\n"
"	background-position: center;\n"
"}\n"
""));
        toolButton_2 = new QToolButton(tab);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(440, 390, 141, 31));
        toolButton_2->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #e100ff, stop:1 #ff006f);\n"
"	color: white;\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px; /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 2px 10px;\n"
"}"));
        toolButton_3 = new QToolButton(tab);
        toolButton_3->setObjectName("toolButton_3");
        toolButton_3->setGeometry(QRect(770, 390, 141, 31));
        toolButton_3->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #e100ff, stop:1 #ff006f);\n"
"	color: white;\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px; /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 2px 10px;\n"
"}"));
        toolButton = new QToolButton(tab);
        toolButton->setObjectName("toolButton");
        toolButton->setEnabled(false);
        toolButton->setGeometry(QRect(130, 390, 141, 31));
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton#toolButton {\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #e100ff, stop:1 #ff006f);\n"
"	color: white;\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px; /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 2px 10px;\n"
"}"));
        toolButton->setAutoRepeat(false);
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(50, 20, 291, 411));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMinimumSize(QSize(291, 411));
        textEdit->setMaximumSize(QSize(291, 411));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: white;\n"
"    background-color: rgb(39, 39, 39);\n"
"}"));
        textEdit_2 = new QTextEdit(tab);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(370, 20, 291, 411));
        textEdit_2->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: white;\n"
"    background-color: rgb(39, 39, 39);\n"
"}"));
        textEdit_3 = new QTextEdit(tab);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(690, 20, 291, 411));
        textEdit_3->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: white;\n"
"    background-color: rgb(39, 39, 39);\n"
"}"));
        tabWidget->addTab(tab, QString());
        textEdit_3->raise();
        textEdit_2->raise();
        textEdit->raise();
        toolButton_2->raise();
        toolButton_3->raise();
        toolButton->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tab_2->setEnabled(true);
        stackedWidget = new QStackedWidget(tab_2);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1031, 521));
        stackedWidget->setLayoutDirection(Qt::LeftToRight);
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName("page");
        page->setEnabled(true);
        page->setStyleSheet(QString::fromUtf8("QWidget#page{\n"
"background-image: url(:/image/image/Weightlifting.jpg);\n"
"}"));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 10, 111, 101));
        label->setStyleSheet(QString::fromUtf8("QLabel#label {\n"
"	image: url(:/image/image/Sergei.jpg);\n"
"}"));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(380, 0, 281, 41));
        QFont font;
        font.setPointSize(18);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    color: white;\n"
"    background-color: rgb(39, 39, 39);\n"
"}"));
        lineEdit_2 = new QLineEdit(page);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(10, 120, 171, 31));
        QFont font1;
        font1.setPointSize(12);
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    color: white;\n"
"    background-color: rgb(39, 39, 39);\n"
"}"));
        textEdit_8 = new QTextEdit(page);
        textEdit_8->setObjectName("textEdit_8");
        textEdit_8->setGeometry(QRect(210, 110, 761, 91));
        textEdit_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(39, 39, 39);"));
        textEdit_9 = new QTextEdit(page);
        textEdit_9->setObjectName("textEdit_9");
        textEdit_9->setGeometry(QRect(210, 250, 751, 91));
        textEdit_9->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 39, 39);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_3 = new QLineEdit(page);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(10, 170, 81, 31));
        QFont font2;
        font2.setPointSize(13);
        lineEdit_3->setFont(font2);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: white;"));
        lineEdit_3->setFrame(false);
        lineEdit_4 = new QLineEdit(page);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(110, 170, 41, 31));
        QFont font3;
        font3.setPointSize(15);
        lineEdit_4->setFont(font3);
        lineEdit_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"background-color: transparent"));
        lineEdit_4->setFrame(false);
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 170, 41, 31));
        QFont font4;
        font4.setPointSize(7);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/icons/icons/star.png);"));
        Left_button_page_1 = new QPushButton(page);
        Left_button_page_1->setObjectName("Left_button_page_1");
        Left_button_page_1->setGeometry(QRect(20, 410, 71, 61));
        Left_button_page_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	image: url(:/icons/icons/left_arrow.png);\n"
"	background-color: transparent;\n"
"}\n"
""));
        Left_button_page_1->setFlat(true);
        Right_button_page_1 = new QPushButton(page);
        Right_button_page_1->setObjectName("Right_button_page_1");
        Right_button_page_1->setEnabled(true);
        Right_button_page_1->setGeometry(QRect(940, 420, 71, 61));
        Right_button_page_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"image: url(:/icons/icons/right_arrow.png);\n"
"}"));
        Right_button_page_1->setFlat(true);
        push_button = new QPushButton(page);
        push_button->setObjectName("push_button");
        push_button->setGeometry(QRect(400, 450, 231, 41));
        push_button->setFont(font1);
        push_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #e100ff, stop:1 #ff006f);\n"
"	color: white;\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px; /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 2px 10px;\n"
"}"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setStyleSheet(QString::fromUtf8("QWidget#page_2{\n"
"	\n"
"	background-image: url(:/image/image/Flexibility.jpg);\n"
"}"));
        lineEdit_5 = new QLineEdit(page_2);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(360, 0, 281, 41));
        lineEdit_5->setFont(font);
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    color: white;\n"
"    background-color: rgb(39, 39, 39);\n"
"}"));
        lineEdit_5->setAlignment(Qt::AlignCenter);
        lineEdit_8 = new QLineEdit(page_2);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(110, 160, 41, 31));
        lineEdit_8->setFont(font3);
        lineEdit_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"background-color: transparent"));
        lineEdit_8->setFrame(false);
        lineEdit_6 = new QLineEdit(page_2);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(10, 110, 171, 31));
        lineEdit_6->setFont(font1);
        lineEdit_6->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    color: white;\n"
"    background-color: rgb(39, 39, 39);\n"
"}"));
        textEdit_12 = new QTextEdit(page_2);
        textEdit_12->setObjectName("textEdit_12");
        textEdit_12->setGeometry(QRect(210, 240, 751, 91));
        textEdit_12->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 39, 39);\n"
"color: rgb(255, 255, 255);"));
        textEdit_11 = new QTextEdit(page_2);
        textEdit_11->setObjectName("textEdit_11");
        textEdit_11->setGeometry(QRect(210, 120, 751, 91));
        textEdit_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(39, 39, 39);"));
        Right_button_page_2 = new QPushButton(page_2);
        Right_button_page_2->setObjectName("Right_button_page_2");
        Right_button_page_2->setGeometry(QRect(940, 390, 81, 61));
        Right_button_page_2->setStyleSheet(QString::fromUtf8("image: url(:/icons/icons/right_arrow.png);"));
        Right_button_page_2->setFlat(true);
        lineEdit_7 = new QLineEdit(page_2);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(10, 160, 81, 31));
        lineEdit_7->setFont(font2);
        lineEdit_7->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: white;"));
        lineEdit_7->setFrame(false);
        Left_button_page_2 = new QPushButton(page_2);
        Left_button_page_2->setObjectName("Left_button_page_2");
        Left_button_page_2->setGeometry(QRect(20, 380, 71, 61));
        Left_button_page_2->setStyleSheet(QString::fromUtf8("image: url(:/icons/icons/left_arrow.png);\n"
"background-color: transparent;\n"
""));
        Left_button_page_2->setFlat(true);
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 20, 101, 71));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/image/image/Gena.jpg);"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(150, 160, 41, 31));
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/icons/icons/star.png);"));
        pushButton_11 = new QPushButton(page_2);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(410, 470, 231, 41));
        pushButton_11->setFont(font1);
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #e100ff, stop:1 #ff006f);\n"
"	color: white;\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px; /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 2px 10px;\n"
"}"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setStyleSheet(QString::fromUtf8("QWidget#page_3{\n"
"	\n"
"	background-image: url(:/image/image/Motivation.jpg);\n"
"}"));
        Left_button_page_3 = new QPushButton(page_3);
        Left_button_page_3->setObjectName("Left_button_page_3");
        Left_button_page_3->setGeometry(QRect(10, 440, 71, 61));
        Left_button_page_3->setStyleSheet(QString::fromUtf8("image: url(:/icons/icons/left_arrow.png);\n"
"background-color: transparent;\n"
""));
        Left_button_page_3->setFlat(true);
        Right_button_page_3 = new QPushButton(page_3);
        Right_button_page_3->setObjectName("Right_button_page_3");
        Right_button_page_3->setGeometry(QRect(930, 440, 81, 61));
        Right_button_page_3->setStyleSheet(QString::fromUtf8("image: url(:/icons/icons/right_arrow.png);"));
        Right_button_page_3->setFlat(true);
        textEdit_14 = new QTextEdit(page_3);
        textEdit_14->setObjectName("textEdit_14");
        textEdit_14->setGeometry(QRect(220, 120, 721, 121));
        textEdit_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(39, 39, 39);"));
        textEdit_13 = new QTextEdit(page_3);
        textEdit_13->setObjectName("textEdit_13");
        textEdit_13->setGeometry(QRect(220, 280, 721, 121));
        textEdit_13->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 39, 39);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_10 = new QLineEdit(page_3);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(120, 160, 41, 31));
        lineEdit_10->setFont(font3);
        lineEdit_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"background-color: transparent"));
        lineEdit_10->setFrame(false);
        lineEdit_9 = new QLineEdit(page_3);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(20, 110, 171, 31));
        lineEdit_9->setFont(font1);
        lineEdit_9->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    color: white;\n"
"    background-color: rgb(39, 39, 39);\n"
"}"));
        lineEdit_11 = new QLineEdit(page_3);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setGeometry(QRect(370, 0, 281, 41));
        lineEdit_11->setFont(font);
        lineEdit_11->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    color: white;\n"
"    background-color: rgb(39, 39, 39);\n"
"}"));
        lineEdit_11->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(page_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 10, 101, 100));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/image/image/Ivan3.jpg);"));
        lineEdit_12 = new QLineEdit(page_3);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setGeometry(QRect(20, 160, 81, 31));
        lineEdit_12->setFont(font2);
        lineEdit_12->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: white;"));
        lineEdit_12->setFrame(false);
        label_5 = new QLabel(page_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(160, 160, 41, 31));
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/icons/icons/star.png);"));
        pushButton_10 = new QPushButton(page_3);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(400, 450, 231, 41));
        pushButton_10->setFont(font1);
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #e100ff, stop:1 #ff006f);\n"
"	color: white;\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px; /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 2px 10px;\n"
"}"));
        stackedWidget->addWidget(page_3);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        textEdit_4 = new QTextEdit(tab_4);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(200, 30, 271, 381));
        textEdit_4->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: white;\n"
"    background-color: rgb(39, 39, 39);\n"
"}"));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        toolButton_2->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214 \321\202\320\260\321\200\320\270\321\204", nullptr));
        toolButton_3->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214 \321\202\320\260\321\200\320\270\321\204", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214 \321\202\320\260\321\200\320\270\321\204", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\227\320\236\320\226\320\263\320\270 \321\207\320\265\320\273\320\273\320\265\320\275\320\264\320\266</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\242\320\260\321\200\320\270\321\204</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margi"
                        "n-right:0px; -qt-block-indent:0; text-indent:0px;\">&quot;\320\230\320\275\320\264\320\270\320\262\320\270\320\264\321\203\320\260\320\273\321\214\320\275\321\213\320\271&quot;</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/icons/abonement-check-mark.svg\" /> 30 \320\264\320\275\320\265\320\271 \320\265\320\266\320\265\320\264\320\275\320\265\320\262\320\275\320\276\320\271 \320\260\320\272\321\202\320\270\320\262\320\275\320\276\321\201\321\202\320\270</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/icons/abonement-check-mark.svg\" /> \320\220\320\262\321\202\320\276\321\200\321\201\320\272\320\260\321\217 \320\267\320\260\320\277\320\260\321\202\320\265\320\275\321\202\320\276\320\262\320\260\320\275\320\275\320\260\321\217 \320\274\320\265\321\202\320\276\320\264\320\270\320\272\320\260</p>\n"
"<p style=\""
                        " margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/icons/abonement-check-mark.svg\" /> \320\236\320\275\320\273\320\260\320\271\320\275-\320\262\320\265\320\261\320\270\320\275\320\260\321\200\321\213 \321\201 \320\270\320\264\320\265\320\276\320\273\320\276\320\263\320\260\320\274\320\270 \320\277\321\200\320\276\320\265\320\272\321\202\320\260</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/icons/abonement-check-mark.svg\" /> \320\241\320\261\320\260\320\273\320\260\320\275\321\201\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \321\200\320\265\321\206\320\265\320\277\321\202\321\213 \320\267\320\260\320\262\321\202\321\200\320\260\320\272 , \320\276\320\261\320\265\320\264 \320\270 \321\203\320\266\320\270\320\275</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px;"
                        " -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/icons/abonement-check-mark.svg\" /> \320\225\320\266\320\265\320\264\320\275\320\265\320\262\320\275\320\260\321\217 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \320\270 \320\272\320\276\321\200\321\200\320\265\320\272\321\206\320\270\321\217 \321\200\320\260\321\206\320\270\320\276\320\275\320\276\320\262 \320\277\320\270\321\202\320\260\320\275\320\270\321\217 \321\215\320\272\321\201\320\277\320\265\321\200\321\202\320\260\320\274\320\270 \320\277\321\200\320\276\320\265\320\272\321\202\320\260</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">30 \320\264\320\275\320\265\320\271 \321\207\320\265\320\273\320\273\320\265\320\275\320\264\320\266\320\260<span style=\" color:#ff55ff;\"> </span><span style=\" font-size:12pt; color:#ff55ff;\">2500 </span><span style=\" font-family:'Google Sans','arial','sans-serif'; font-size:12pt; font-weight:500; color:#"
                        "f451f4;\">\342\202\275</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\242\320\260\321\200\320\270\321\204 \320\241\321\202\320\260\320\275\320\264\320\260\321\200\321\202</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">&quot;5+1 \320\261\320\265\321\201\320\277\320\273\320\260\321"
                        "\202\320\275\320\276&quot;</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/icons/abonement-check-mark.svg\" /> \320\221\320\265\320\267\320\273\320\270\320\274\320\270\321\202\320\275\321\213\320\271 \320\264\320\276\321\201\321\202\321\203\320\277 \320\262 \320\272\320\273\321\203\320\261</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/icons/abonement-check-mark.svg\" />  \320\242\321\200\320\265\320\275\320\260\320\266\321\221\321\200\320\275\321\213\320\271 \320\267\320\260\320\273</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        "><img src=\":/icons/icons/abonement-check-mark.svg\" />  \320\223\321\200\321\203\320\277\320\277\320\276\320\262\321\213\320\265 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\270</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/icons/abonement-check-mark.svg\" />  \320\240\320\265\320\263\321\203\320\273\321\217\321\200\320\275\321\213\320\271 \320\260\320\275\320\260\320\273\320\270\320\267 \321\201\320\276\321\201\321\202\320\260\320\262 \321\202\320\265\320\273\320\260 InBody</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/icons/abonement-check-mark.svg\" />  \320\244\320\270\320\275\321\201\320\272\320\270\320\265 \321\201\320\260\321\203\320\275\321\213 \320\270 \321\205\320\260\320\274\320\274\320\260\320\274</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; mar"
                        "gin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \320\274\320\265\321\201\321\217\321\206\320\260<span style=\" color:#ff55ff;\"> </span><span style=\" font-size:14pt; color:#ff55ff;\">1690 </span><span style=\" font-family:'Google Sans','arial','sans-serif'; font-size:20px; font-weight:500; color:#f451f4;\">\342\202\275</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\242\320\260\321\200\320\270\321\204 \320\241\321\202\320\260\320\275\320\264\320\260\321\200\321\202</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">&quot;5+1 \320\261\320\265\321\201\320\277\320\273\320\260\321"
                        "\202\320\275\320\276&quot;</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/icons/abonement-check-mark.svg\" />  6 \320\274\320\265\321\201\321\217\321\206\320\265\320\262 \320\261\320\265\320\267\320\273\320\270\320\274\320\270\321\202\320\275\320\276\320\263\320\276 \320\264\320\276\321\201\321\202\321\203\320\277\320\260 \320\262 \320\276\320\264\320\270\320\275 \320\272\320\273\321\203\320\261</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/icons/abonement-check-mark.svg\" />  \320\242\321\200\320\265\320\275\320\260\320\266\321\221\321\200\320\275\321\213\320\271 \320\267\320\260\320\273</p>\n"
"<p style=\" m"
                        "argin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/icons/abonement-check-mark.svg\" />  \320\223\321\200\321\203\320\277\320\277\320\276\320\262\321\213\320\265 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\270</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/icons/abonement-check-mark.svg\" />  \320\240\320\265\320\263\321\203\320\273\321\217\321\200\320\275\321\213\320\271 \320\260\320\275\320\260\320\273\320\270\320\267 \321\201\320\276\321\201\321\202\320\260\320\262 \321\202\320\265\320\273\320\260 InBody</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/icons/abonement-check-mark.svg\" />  \320\244\320\270\320\275\321\201\320\272\320\270\320\265 \321\201\320\260\321\203\320\275\321\213 \320\270 \321\205"
                        "\320\260\320\274\320\274\320\260\320\274</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \320\274\320\265\321\201\321\217\321\206\320\260<span style=\" color:#ff55ff;\"> </span><span style=\" font-size:14pt; color:#ff55ff;\">1190 </span><span style=\" font-family:'Google Sans','arial','sans-serif'; font-size:20px; font-weight:500; color:#f451f4;\">\342\202\275</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\220\320\261\320\276\320\275\320\265\320\274\320\265\320\275\321\202\321\213", nullptr));
        label->setText(QString());
        lineEdit->setText(QCoreApplication::translate("MainWindow", " \320\242\321\217\320\266\321\221\320\273\320\260\321\217 \320\220\321\202\320\273\320\265\321\202\320\270\320\272\320\260", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "\320\242\321\200\320\265\320\275\320\265\321\200 \320\223\320\265\320\275\320\275\320\260\320\264\320\270\320\271", nullptr));
        textEdit_8->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">\320\227\320\260\321\201\320\273\321\203\320\263\320\270:</span><span style=\" font-size:12pt;\"> \320\236\320\277\321\213\321\202\320\275\321\213\320\271 \321\201\320\277\320\276\321\200\321\202\321\201\320\274\320\265\320\275 \320\270 \321\202\321\200\320\265\320\275\320\265\321\200, \321\203\321\207\320\260\321\201\321\202\320\262\320\276\320\262\320"
                        "\260\320\273 \320\262 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\265 \321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\320\271 \320\277\320\276 \320\277\320\260\321\203\321\215\321\200\320\273\320\270\321\204\321\202\320\270\320\275\320\263\321\203 \320\270 \320\266\320\270\320\274\321\203 \321\210\321\202\320\260\320\275\320\263\320\270. \320\237\320\276\320\274\320\276\320\263 \320\274\320\275\320\276\320\263\320\270\320\274 \320\264\320\276\321\201\321\202\320\270\321\207\321\214 \320\267\320\275\320\260\321\207\320\270\321\202\320\265\320\273\321\214\320\275\321\213\321\205 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\276\320\262 \320\262 \321\203\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\270\320\270 \320\274\321\213\321\210\320\265\321\207\320\275\320\276\320\271 \320\274\320\260\321\201\321\201\321\213 \320\270 \321\201\320\270\320\273\321\213.</span></p></body></html>", nullptr));
        textEdit_9->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">\320\237\321\200\320\276\321\204\320\270\320\273\321\214 \321\200\320\260\320\261\320\276\321\202\321\213: </span><span style=\" font-size:12pt;\">\320\241\320\277\320\265\321\206\320\270\320\260\320\273\320\270\320\267\320\270\321\200\321\203\320\265\321\202\321\201\321\217 \320\275\320\260 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320"
                        "\262\320\275\321\213\321\205 \321\201\320\270\320\273\320\276\320\262\321\213\321\205 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\260\321\205, \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\320\272\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274 \320\277\320\276\320\264\320\263\320\276\321\202\320\276\320\262\320\272\320\270 \320\272 \321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\321\217\320\274 \320\277\320\276 \320\277\320\260\321\203\321\215\321\200\320\273\320\270\321\204\321\202\320\270\320\275\320\263\321\203 \320\270 \320\266\320\270\320\274\321\203 \321\210\321\202\320\260\320\275\320\263\320\270. \320\237\321\200\320\276\320\262\320\276\320\264\320\270\321\202 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\270 \320\272\320\260\320\272 \320\264\320\273\321\217 \320\275\320\260\321\207\320\270\320\275\320\260\321\216\321\211\320\270\321\205, \321\202\320\260"
                        "\320\272 \320\270 \320\264\320\273\321\217 \320\276\320\277\321\213\321\202\320\275\321\213\321\205 \320\260\321\202\320\273\320\265\321\202\320\276\320\262.</span></p></body></html>", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\271\321\202\320\270\320\275\320\263", nullptr));
        lineEdit_4->setText(QString());
        label_2->setText(QString());
        Left_button_page_1->setText(QString());
        Right_button_page_1->setText(QString());
        push_button->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\202\321\200\320\265\320\275\320\265\321\200\320\260", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("MainWindow", "\320\223\320\270\320\261\320\272\320\276\321\201\321\202\321\214", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("MainWindow", "4,8", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("MainWindow", "\320\242\321\200\320\265\320\275\320\265\321\200 \320\223\320\265\320\275\320\275\320\260\320\264\320\270\320\271", nullptr));
        textEdit_12->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">\320\237\321\200\320\276\321\204\320\270\320\273\321\214 \321\200\320\260\320\261\320\276\321\202\321\213:</span><span style=\" font-size:12pt;\"> \320\241\320\277\320\265\321\206\320\270\320\260\320\273\320\270\320\267\320\270\321\200\321\203\320\265\321\202\321\201\321\217 \320\275\320\260 \320\270\320\275\320\264\320\270\320\262\320\270\320\264\321"
                        "\203\320\260\320\273\321\214\320\275\321\213\321\205 \320\270 \320\263\321\200\321\203\320\277\320\277\320\276\320\262\321\213\321\205 \320\267\320\260\320\275\321\217\321\202\320\270\321\217\321\205 \320\277\320\276 \320\271\320\276\320\263\320\265 \320\270 \320\277\320\270\320\273\320\260\321\202\320\265\321\201\321\203. \320\240\320\260\320\267\321\200\320\260\320\261\320\260\321\202\321\213\320\262\320\260\320\265\321\202 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213, \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\275\321\213\320\265 \320\275\320\260 \321\203\320\273\321\203\321\207\321\210\320\265\320\275\320\270\320\265 \320\263\320\270\320\261\320\272\320\276\321\201\321\202\320\270, \321\201\320\270\320\273\321\213 \320\270 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\206\320\270\320\270.</span></p></body></html>", nullptr));
        textEdit_11->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">\320\227\320\260\321\201\320\273\321\203\320\263\320\270:</span><span style=\" font-size:12pt;\"> \320\230\320\274\320\265\320\265\321\202 \320\276\320\277\321\213\321\202 \321\200\320\260\320\261\320\276\321\202\321\213 \321\201 \320\272\320\273\320\270\320\265\320\275\321\202\320\260\320\274\320\270 \320\262\321\201\320\265\321\205 \320\262\320\276\320"
                        "\267\321\200\320\260\321\201\321\202\320\276\320\262 \320\270 \321\203\321\200\320\276\320\262\320\275\320\265\320\271 \320\277\320\276\320\264\320\263\320\276\321\202\320\276\320\262\320\272\320\270. \320\237\320\276\320\273\321\203\321\207\320\270\320\273 \321\201\320\265\321\200\321\202\320\270\321\204\320\270\320\272\320\260\321\202\321\213 \320\277\320\276 \320\271\320\276\320\263\320\265 \320\270 \320\277\320\270\320\273\320\260\321\202\320\265\321\201\321\203. \320\237\320\276\320\274\320\276\320\263 \320\274\320\275\320\276\320\263\320\270\320\274 \321\203\320\273\321\203\321\207\321\210\320\270\321\202\321\214 \321\201\320\262\320\276\321\216 \320\263\320\270\320\261\320\272\320\276\321\201\321\202\321\214 \320\270 \320\276\321\201\320\262\320\276\320\261\320\276\320\264\320\270\321\202\321\214\321\201\321\217 \320\276\321\202 \320\261\320\276\320\273\320\265\320\271 \320\262 \321\201\320\277\320\270\320\275\320\265.</span></p></body></html>", nullptr));
        Right_button_page_2->setText(QString());
        lineEdit_7->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\271\321\202\320\270\320\275\320\263", nullptr));
        Left_button_page_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\202\321\200\320\265\320\275\320\265\321\200\320\260", nullptr));
        Left_button_page_3->setText(QString());
        Right_button_page_3->setText(QString());
        textEdit_14->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">\320\227\320\260\321\201\320\273\321\203\320\263\320\270:</span><span style=\" font-size:12pt;\"> \320\237\320\276\320\274\320\276\320\263 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\321\203 \320\272\320\273\320\270\320\265\320\275\321\202\320\276\320\262 \320\264\320\276\321\201\321\202\320\270\321\207\321\214 \321\201\320\262\320"
                        "\276\320\270\321\205 \321\206\320\265\320\273\320\265\320\271 \320\262 \321\204\320\270\321\202\320\275\320\265\321\201\320\265 \320\270 \320\267\320\264\320\276\321\200\320\276\320\262\320\276\320\274 \320\276\320\261\321\200\320\260\320\267\320\265 \320\266\320\270\320\267\320\275\320\270. \320\230\320\274\320\265\320\265\321\202 \321\201\320\265\321\200\321\202\320\270\321\204\320\270\320\272\320\260\321\202\321\213 \320\277\320\276 \320\274\320\276\321\202\320\270\320\262\320\260\321\206\320\270\320\276\320\275\320\275\320\276\320\274\321\203 \321\202\321\200\320\265\320\275\320\270\320\275\320\263\321\203 \320\270 \320\277\321\201\320\270\321\205\320\276\320\273\320\276\320\263\320\270\320\270. \320\220\320\272\321\202\320\270\320\262\320\275\320\276 \321\203\321\207\320\260\321\201\321\202\320\262\321\203\320\265\321\202 \320\262 \321\201\320\276\321\206\320\270\320\260\320\273\321\214\320\275\321\213\321\205 \321\201\320\265\321\202\321\217\321\205, \320\262\320\264\320\276\321\205\320\275\320\276\320\262"
                        "\320\273\321\217\321\217 \320\277\320\276\320\264\320\277\320\270\321\201\321\207\320\270\320\272\320\276\320\262 \320\275\320\260 \320\267\320\264\320\276\321\200\320\276\320\262\321\213\320\271 \320\276\320\261\321\200\320\260\320\267 \320\266\320\270\320\267\320\275\320\270.</span></p></body></html>", nullptr));
        textEdit_13->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">\320\237\321\200\320\276\321\204\320\270\320\273\321\214 \321\200\320\260\320\261\320\276\321\202\321\213:</span><span style=\" font-size:12pt;\"> \320\241\320\277\320\265\321\206\320\270\320\260\320\273\320\270\320\267\320\270\321\200\321\203\320\265\321\202\321\201\321\217 \320\275\320\260 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\320"
                        "\270 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\273\320\270\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\321\205 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\321\207\320\275\321\213\321\205 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\274\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276 \320\274\320\276\321\202\320\270\320\262\320\270\321\200\321\203\321\216\321\202 \320\272\320\273\320\270\320\265\320\275\321\202\320\276\320\262. \320\237\321\200\320\276\320\262\320\276\320\264\320\270\321\202 \320\274\320\276\321\202\320\270\320\262\320\260\321\206\320\270\320\276\320\275\320\275\321\213\320\265 \321\201\320\265\320\274\320\270\320\275\320\260\321\200\321\213 \320\270 \321\202\321\200\320\265\320\275\320\270\320\275\320\263\320\270 \320\264\320\273\321\217 \320\277\320\276\320\264\320\264\320\265\321\200\320\266\320\272\320\270"
                        " \320\277\321\201\320\270\321\205\320\276\320\273\320\276\320\263\320\270\321\207\320\265\321\201\320\272\320\276\320\263\320\276 \320\261\320\273\320\260\320\263\320\276\320\277\320\276\320\273\321\203\321\207\320\270\321\217.</span></p></body></html>", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("MainWindow", "4,8", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("MainWindow", "\320\242\321\200\320\265\320\275\320\265\321\200 \320\230\320\262\320\260\320\275", nullptr));
        lineEdit_11->setText(QCoreApplication::translate("MainWindow", "\320\223\320\270\320\261\320\272\320\276\321\201\321\202\321\214", nullptr));
        label_6->setText(QString());
        lineEdit_12->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\271\321\202\320\270\320\275\320\263", nullptr));
        label_5->setText(QString());
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\202\321\200\320\265\320\275\320\265\321\200\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\242\321\200\320\265\320\275\320\265\321\200\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\220\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\320\232\320\276\321\200\320\267\320\270\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
