/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QToolButton *toolButton;
    QLineEdit *lineEdit;
    QToolButton *toolButton_2;
    QRadioButton *radioButton;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(400, 300);
        login->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: rgb(138, 136, 135);\n"
"     /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 \321\203\320\263\320\273\320\276\320\262 */\n"
"}"));
        label_2 = new QLabel(login);
        label_2->setObjectName("label_2");
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(121, 71, 89, 20));
        label_2->setToolTipDuration(-1);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setLineWidth(-3);
        label_2->setTextFormat(Qt::PlainText);
        lineEdit_2 = new QLineEdit(login);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(121, 135, 147, 30));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(226, 226, 226);\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px; /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 2px 10px;\n"
"}"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_2->setCursorMoveStyle(Qt::VisualMoveStyle);
        toolButton = new QToolButton(login);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(200, 180, 61, 21));
        toolButton->setStyleSheet(QString::fromUtf8("border-color: rgb(63, 6, 161);\n"
"background-color: rgb(85, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;"));
        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(121, 98, 147, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	selection-color: rgb(255, 255, 255);\n"
"	background-color: rgb(226, 226, 226);\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px; /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 2px 10px;\n"
"}"));
        toolButton_2 = new QToolButton(login);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(120, 180, 71, 21));
        toolButton_2->setStyleSheet(QString::fromUtf8("border-color: rgb(63, 6, 161);\n"
"background-color: rgb(85, 162, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;"));
        radioButton = new QRadioButton(login);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(270, 140, 16, 24));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("login", "             Login", nullptr));
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("login", "Password", nullptr));
        toolButton->setText(QCoreApplication::translate("login", "Reg", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("login", "PhoneNumber", "Username"));
        toolButton_2->setText(QCoreApplication::translate("login", "Login", nullptr));
        radioButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
