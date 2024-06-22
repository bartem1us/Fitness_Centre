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
    if (starButtons.isEmpty()) {
        this->starButtons.append({ui->star_1 ,false});
        this->starButtons.append({ui->star_2 ,false});
        this->starButtons.append({ui->star_3 ,false});
        this->starButtons.append({ui->star_4 ,false});
        this->starButtons.append({ui->star_5 ,false});
    }


    connect(ui->addComment,&CustomButton::clicked,this,&Comment::on_AddComment_clicked);

    for(size_t i = 0; i<starButtons.size() ; ++i)
    {
        connect(starButtons[i].first,&HoverButton::mouseEntered,this,[this,i](){
            on_Star_hover(static_cast<uint8_t>(i+1));});

        connect(starButtons[i].first,&HoverButton::mouseLeft,this,[this,i](){
            on_Star_unhover(static_cast<uint8_t>(i+1));});

        connect(starButtons[i].first,&HoverButton::clicked,this,[this,i](){
            on_Star_clicked(static_cast<uint8_t>(i+1));});
    }



}

void Comment::on_Star_clicked(uint8_t index)
{
    for (size_t i = 0 ; i< starButtons.size() ; ++i)
    {
        if(i<index){
            starButtons[i].second = true;
        }
        else
        {
            starButtons[i].second = false;
            starButtons[i].first->setStyleSheet("image: url(:/icons/icons/star_empty_2.png);"
                                                "background-color: transparent;");
            //сделать отдельную функцию под установку stylesheet
        }

    }
    rating = index;
}

void Comment::on_Star_unhover(uint8_t index)
{
    for(size_t i = 0 ; i< index ; ++i)
    {
        if(!starButtons[i].second){
            starButtons[i].first->setStyleSheet("image: url(:/icons/icons/star_empty_2.png);"
                                                "background-color: transparent;");
        }
    }
}

void Comment::on_Star_hover(uint8_t index)
{

    for(size_t i = 0 ; i< index ; ++i)
    {
        if(!starButtons[i].second){
            starButtons[i].first->setStyleSheet("image: url(:/icons/icons/star_fill_2.png);"
                                                "background-color: transparent;");
        }
    }

}
void Comment::on_AddComment_clicked()
{
    ui->addComment->animation_for_button();
    QString trainerName = ui->trainerName->text();
    QString comment = ui->comment->toPlainText();

    std::unique_ptr<PGresult,decltype(&PQclear)> res(PQexec(pg->getConnection().get(),
                                                            query::find_trainer_id(trainerName.toStdString()).c_str()),
                                                     PQclear);

    if(rating == 0)
    {
        ui->addCommentError->setText("Вам нужно оценить тренера");
    }
    else if (PQntuples(res.get())!=0)
    {
        QString coach_id = PQgetvalue(res.get(), 0, PQfnumber(res.get(), "id"));
        PQexec(pg->getConnection().get(), query::input_comment(coach_id.toStdString(),
                                                               comment.toStdString(),
                                                               std::to_string(rating).c_str()).c_str());

        this->close();
    }

}
Comment::~Comment()
{
    delete ui;
}
