#ifndef COMMENT_H
#define COMMENT_H

#include <QWidget>

namespace Ui {
class Comment;
}

class Comment : public QWidget
{
    Q_OBJECT



public:
    explicit Comment(QWidget *parent = nullptr);
    Comment(const QString &TrainerName, QWidget *parent = nullptr);
    void on_AddComment_clicked ();
    ~Comment();

private:
    Ui::Comment *ui;
};

#endif // COMMENT_H
