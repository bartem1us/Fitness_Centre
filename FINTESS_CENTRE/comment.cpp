#include "comment.h"
#include "ui_comment.h"

Comment::Comment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Comment)
{
    ui->setupUi(this);
}
Comment::Comment(const QString &TrainerName, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Comment)
{
    ui->trainerName->setText(TrainerName);
    //connect(ui->addComment,&QPushButton::clicked,this,&Comment::on_AddComment_clicked);
}
void on_AddComment_clicked()
{

}
Comment::~Comment()
{
    delete ui;
}
