#include "comment.h"
#include "ui_comment.h"
#include "query.h"

Comment::Comment(QWidget *parent,
                 std::shared_ptr<PostgreSQLConnection> pg)
    : QWidget(parent)
    , ui(new Ui::Comment)
    , pg(pg)
{
    ui->setupUi(this);
}
Comment::Comment(const QString &TrainerName,
                 std::shared_ptr<PostgreSQLConnection> pg,
                 QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Comment)
    , pg(pg)
{
    ui->setupUi(this);
    ui->trainerName->setText(TrainerName);
    connect(ui->addComment,&QPushButton::clicked,this,&Comment::on_AddComment_clicked);
}
void Comment::on_AddComment_clicked()
{
    QString trainerName = ui->trainerName->text();
    QString comment = ui->comment->toPlainText();
    QString rating = ui->rating->text();
    std::unique_ptr<PGresult,decltype(&PQclear)> res(PQexec(pg->getConnection().get(),
                                                            query::find_trainer_id(trainerName.toStdString()).c_str()),
                                                     PQclear);

    if (PQntuples(res.get())!=0)
    {
        QString coach_id = PQgetvalue(res.get(), 0, PQfnumber(res.get(), "id"));
        PQexec(pg->getConnection().get(), query::input_comment(coach_id.toStdString(),
                                                               comment.toStdString(),
                                                               rating.toStdString()).c_str());

        this->close();
    }
    // Закрываем окно входа

}
Comment::~Comment()
{
    delete ui;
}
