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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QWidget *tab_2;
    QTextEdit *textEdit_5;
    QWidget *tab_3;
    QWidget *tab_4;
    QTextEdit *textEdit_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1161, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(false);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(false);
        tabWidget->setGeometry(QRect(60, 0, 1031, 601));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName("tab");
        tab->setStyleSheet(QString::fromUtf8("QWidget#tab{\n"
"	background-repeat: no-repeat;\n"
"	background-image: url(C:/DB_FINTESS_CENTRE/FINTESS_CENTRE/fitnes_image.jpg);\n"
"	background-position: center;\n"
"}\n"
""));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(440, 390, 141, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #e100ff, stop:1 #ff006f);\n"
"	color: white;\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px; /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 2px 10px;\n"
"}"));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(770, 390, 141, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #e100ff, stop:1 #ff006f);\n"
"	color: white;\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px; /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 2px 10px;\n"
"}"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(130, 390, 141, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton {\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #e100ff, stop:1 #ff006f);\n"
"	color: white;\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px; /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 2px 10px;\n"
"}"));
        pushButton->setAutoRepeat(false);
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
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tab_2->setEnabled(false);
        textEdit_5 = new QTextEdit(tab_2);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(20, 0, 291, 411));
        sizePolicy.setHeightForWidth(textEdit_5->sizePolicy().hasHeightForWidth());
        textEdit_5->setSizePolicy(sizePolicy);
        textEdit_5->setMinimumSize(QSize(291, 411));
        textEdit_5->setMaximumSize(QSize(291, 411));
        textEdit_5->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: white;\n"
"    background-color: rgb(39, 39, 39);\n"
"}"));
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

        tabWidget->setCurrentIndex(0);
        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214 \321\202\320\260\321\200\320\270\321\204", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214 \321\202\320\260\321\200\320\270\321\204", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214 \321\202\320\260\321\200\320\270\321\204", nullptr));
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
        textEdit_5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
