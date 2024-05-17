/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>
#include <custombutton.h>

QT_BEGIN_NAMESPACE

class Ui_Registration
{
public:
    CustomButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *warningMessage;

    void setupUi(QWidget *Registration)
    {
        if (Registration->objectName().isEmpty())
            Registration->setObjectName("Registration");
        Registration->resize(355, 300);
        Registration->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: rgb(138, 136, 135);\n"
"     /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 \321\203\320\263\320\273\320\276\320\262 */\n"
"}"));
        pushButton = new CustomButton(Registration);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(80, 240, 171, 29));
        pushButton->setStyleSheet(QString::fromUtf8("border-color: rgb(63, 6, 161);\n"
"background-color: rgb(85, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;"));
        lineEdit = new QLineEdit(Registration);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(80, 120, 171, 26));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	selection-color: rgb(255, 255, 255);\n"
"	background-color: rgb(226, 226, 226);\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px; /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 2px 10px;\n"
"}"));
        lineEdit_2 = new QLineEdit(Registration);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(80, 70, 171, 26));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	selection-color: rgb(255, 255, 255);\n"
"	background-color: rgb(226, 226, 226);\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px; /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 2px 10px;\n"
"}"));
        lineEdit_4 = new QLineEdit(Registration);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(80, 180, 171, 26));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	selection-color: rgb(255, 255, 255);\n"
"	background-color: rgb(226, 226, 226);\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px; /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 2px 10px;\n"
"}"));
        lineEdit_4->setEchoMode(QLineEdit::Password);
        label = new QLabel(Registration);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 0, 63, 20));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(Registration);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 50, 63, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(Registration);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 50, 63, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(Registration);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 100, 63, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(Registration);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 150, 63, 20));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_3 = new QLineEdit(Registration);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(80, 20, 171, 26));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	gridline-color: gray;\n"
"	selection-background-color: gray; \n"
"	selection-color: white;\n"
"	background-color: rgb(226, 226, 226);\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px; /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 2px 10px;\n"
"}\n"
"QLineEdit::cursor { \n"
"background-color: gray; \n"
"border: none;\n"
"width: 2px;\n"
" }"));
        lineEdit_3->setCursorPosition(18);
        lineEdit_3->setCursorMoveStyle(Qt::VisualMoveStyle);
        warningMessage = new QLabel(Registration);
        warningMessage->setObjectName("warningMessage");
        warningMessage->setGeometry(QRect(40, 210, 251, 20));
        warningMessage->setStyleSheet(QString::fromUtf8("QLabel#warningMessage\n"
"{\n"
"	color: rgb(255, 0, 0);\n"
"}"));
        warningMessage->setAlignment(Qt::AlignCenter);

        retranslateUi(Registration);

        QMetaObject::connectSlotsByName(Registration);
    } // setupUi

    void retranslateUi(QWidget *Registration)
    {
        Registration->setWindowTitle(QCoreApplication::translate("Registration", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Registration", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        label->setText(QCoreApplication::translate("Registration", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("Registration", "\320\230\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("Registration", "\320\230\320\274\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("Registration", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("Registration", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        lineEdit_3->setInputMask(QCoreApplication::translate("Registration", "+9 (999) 999 99 99", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("Registration", "+ ()   ", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("Registration", "+7 (999) 999 99 99", nullptr));
        warningMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Registration: public Ui_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
