#ifndef COMMENT_H
#define COMMENT_H

#include <QWidget>
#include "pgconnection.h"
#include "hoverbutton.h"
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
    void on_Star_hover(uint8_t index);
    void on_Star_unhover(uint8_t index);
    void on_Star_clicked (uint8_t index);
    void test();
    ~Comment();

private:
    std::shared_ptr<PostgreSQLConnection> pg;
    Ui::Comment *ui;
    QVector<QPair<HoverButton*, bool>> starButtons;
    size_t rating = 0;
};

#endif // COMMENT_H
