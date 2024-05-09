#ifndef COMMENT_H
#define COMMENT_H

#include <QWidget>
#include "pgconnection.h"

namespace Ui {
class Comment;
}

class Comment : public QWidget
{
    Q_OBJECT



public:
    explicit Comment(QWidget *parent = nullptr,
                     std::shared_ptr<PostgreSQLConnection> pg = nullptr);
    Comment(const QString &TrainerName,
            std::shared_ptr<PostgreSQLConnection> pg = nullptr,
            QWidget *parent = nullptr);
    void on_AddComment_clicked ();
    ~Comment();

private:
    std::shared_ptr<PostgreSQLConnection> pg;
    Ui::Comment *ui;
};

#endif // COMMENT_H
