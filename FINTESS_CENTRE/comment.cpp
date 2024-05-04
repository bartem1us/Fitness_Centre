#include "comment.h"
#include "ui_comment.h"

Comment::Comment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Comment)
{
    ui->setupUi(this);
}

Comment::~Comment()
{
    delete ui;
}
