/********************************************************************************
** Form generated from reading UI file 'comment.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENT_H
#define UI_COMMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Comment
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *Comment)
    {
        if (Comment->objectName().isEmpty())
            Comment->setObjectName("Comment");
        Comment->resize(816, 442);
        Comment->setStyleSheet(QString::fromUtf8("QWidget#Comment{\n"
"	background-repeat: no-repeat;\n"
"	background-image: url(C:/DB_FINTESS_CENTRE/FINTESS_CENTRE/fitnes_image.jpg);\n"
"	background-position: center;\n"
"}"));
        lineEdit = new QLineEdit(Comment);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(270, 50, 241, 26));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(39, 39, 39);\n"
"}"));
        label = new QLabel(Comment);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 20, 71, 20));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Comment);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(360, 90, 81, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        textEdit = new QTextEdit(Comment);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(180, 120, 421, 171));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(39, 39, 39);\n"
"}"));
        pushButton = new QPushButton(Comment);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 380, 121, 29));
        label_3 = new QLabel(Comment);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(350, 310, 101, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(Comment);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(340, 340, 113, 26));

        retranslateUi(Comment);

        QMetaObject::connectSlotsByName(Comment);
    } // setupUi

    void retranslateUi(QWidget *Comment)
    {
        Comment->setWindowTitle(QCoreApplication::translate("Comment", "Form", nullptr));
        label->setText(QCoreApplication::translate("Comment", "\320\242\321\200\320\265\320\275\320\265\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("Comment", "\320\222\320\260\321\210 \320\276\321\202\320\267\321\213\320\262", nullptr));
        pushButton->setText(QCoreApplication::translate("Comment", "\320\236\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\276\321\202\320\267\321\213\320\262", nullptr));
        label_3->setText(QCoreApplication::translate("Comment", "\320\222\320\260\321\210\320\260 \320\276\321\206\320\265\320\275\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Comment: public Ui_Comment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENT_H
