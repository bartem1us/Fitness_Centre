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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include <custombutton.h>
#include <hoverbutton.h>

QT_BEGIN_NAMESPACE

class Ui_Comment
{
public:
    QLineEdit *trainerName;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *comment;
    CustomButton *addComment;
    QLabel *label_3;
    QLineEdit *lineEdit;
    HoverButton *star_1;
    HoverButton *star_2;
    HoverButton *star_3;
    HoverButton *star_4;
    HoverButton *star_5;

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
        trainerName = new QLineEdit(Comment);
        trainerName->setObjectName("trainerName");
        trainerName->setGeometry(QRect(270, 50, 241, 26));
        trainerName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(39, 39, 39);\n"
"}"));
        trainerName->setAlignment(Qt::AlignCenter);
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
        comment = new QTextEdit(Comment);
        comment->setObjectName("comment");
        comment->setGeometry(QRect(180, 120, 421, 171));
        comment->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(39, 39, 39);\n"
"}"));
        addComment = new CustomButton(Comment);
        addComment->setObjectName("addComment");
        addComment->setGeometry(QRect(330, 380, 141, 29));
        addComment->setStyleSheet(QString::fromUtf8("QPushButton#addComment {\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #e100ff, stop:1 #ff006f);\n"
"	color: white;\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px; /* \320\240\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 2px 10px;\n"
"}"));
        label_3 = new QLabel(Comment);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(350, 310, 101, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(Comment);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(650, 140, 113, 26));
        star_1 = new HoverButton(Comment);
        star_1->setObjectName("star_1");
        star_1->setGeometry(QRect(260, 330, 41, 31));
        star_1->setStyleSheet(QString::fromUtf8("image: url(:/icons/icons/star_empty_2.png);\n"
"background-color: transparent;"));
        star_1->setFlat(true);
        star_2 = new HoverButton(Comment);
        star_2->setObjectName("star_2");
        star_2->setGeometry(QRect(320, 330, 41, 31));
        star_2->setStyleSheet(QString::fromUtf8("image: url(:/icons/icons/star_empty_2.png);\n"
"background-color: transparent;"));
        star_2->setFlat(true);
        star_3 = new HoverButton(Comment);
        star_3->setObjectName("star_3");
        star_3->setGeometry(QRect(380, 330, 41, 31));
        star_3->setStyleSheet(QString::fromUtf8("image: url(:/icons/icons/star_empty_2.png);\n"
"background-color: transparent;"));
        star_3->setFlat(true);
        star_4 = new HoverButton(Comment);
        star_4->setObjectName("star_4");
        star_4->setGeometry(QRect(440, 330, 41, 31));
        star_4->setStyleSheet(QString::fromUtf8("image: url(:/icons/icons/star_empty_2.png);\n"
"background-color: transparent;"));
        star_4->setFlat(true);
        star_5 = new HoverButton(Comment);
        star_5->setObjectName("star_5");
        star_5->setGeometry(QRect(500, 330, 41, 31));
        star_5->setStyleSheet(QString::fromUtf8("image: url(:/icons/icons/star_empty_2.png);\n"
"background-color: transparent;"));
        star_5->setFlat(true);

        retranslateUi(Comment);

        QMetaObject::connectSlotsByName(Comment);
    } // setupUi

    void retranslateUi(QWidget *Comment)
    {
        Comment->setWindowTitle(QCoreApplication::translate("Comment", "Form", nullptr));
        label->setText(QCoreApplication::translate("Comment", "\320\242\321\200\320\265\320\275\320\265\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("Comment", "\320\222\320\260\321\210 \320\276\321\202\320\267\321\213\320\262", nullptr));
        addComment->setText(QCoreApplication::translate("Comment", "\320\236\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\276\321\202\320\267\321\213\320\262", nullptr));
        label_3->setText(QCoreApplication::translate("Comment", "\320\222\320\260\321\210\320\260 \320\276\321\206\320\265\320\275\320\272\320\260", nullptr));
        star_1->setText(QString());
        star_2->setText(QString());
        star_3->setText(QString());
        star_4->setText(QString());
        star_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Comment: public Ui_Comment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENT_H
