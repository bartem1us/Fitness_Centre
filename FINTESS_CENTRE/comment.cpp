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
                 QWidget *parent , QVector<HoverButton*> starButtons)
    : QWidget(parent)
    , ui(new Ui::Comment)
    , pg(pg)
    , starButtons{starButtons}
{
    ui->setupUi(this);
    ui->trainerName->setText(TrainerName);
    if (starButtons.isEmpty()) {
        this->starButtons.append(ui->star_1);
        this->starButtons.append(ui->star_2);
        this->starButtons.append(ui->star_3);
        this->starButtons.append(ui->star_4);
        this->starButtons.append(ui->star_5);
    }

    connect(ui->addComment,&CustomButton::clicked,this,&Comment::on_AddComment_clicked);
    connect(ui->star_1,&HoverButton::mouseEntered,this,[this](){
        on_Star_hover(1);});
    connect(ui->star_1,&HoverButton::mouseLeft,this,[this](){
        on_Star_unhover(1);});

    connect(ui->star_2,&HoverButton::mouseEntered,this,[this](){
        on_Star_hover(2);});
    connect(ui->star_2,&HoverButton::mouseLeft,this,[this](){
        on_Star_unhover(2);});

    connect(ui->star_3,&HoverButton::mouseEntered,this,[this](){
        on_Star_hover(3);});
    connect(ui->star_3,&HoverButton::mouseLeft,this,[this](){
        on_Star_unhover(3);});

    connect(ui->star_4,&HoverButton::mouseEntered,this,[this](){
        on_Star_hover(4);});
    connect(ui->star_4,&HoverButton::mouseLeft,this,[this](){
        on_Star_unhover(4);});

    connect(ui->star_5,&HoverButton::mouseEntered,this,[this](){
        on_Star_hover(5);});
    connect(ui->star_5,&HoverButton::mouseLeft,this,[this](){
        on_Star_unhover(5);});


}

void Comment::on_Star_unhover(uint8_t index)
{
    for(size_t i = 0 ; i<index ; ++i)
    {
        starButtons[i]->setStyleSheet("image: url(:/icons/icons/star_empty_2.png);");
    }
}

void Comment::on_Star_hover(uint8_t index)
{
    for(size_t i = 0 ; i<index ; ++i)
    {
        starButtons[i]->setStyleSheet("image: url(:/icons/icons/star_fill_2.png);");
    }
}
void Comment::on_AddComment_clicked()
{
    ui->addComment->animation_for_button();
    QString trainerName = ui->trainerName->text();
    QString comment = ui->comment->toPlainText();
    //QString rating = ui->rating->text();
    QString rating = "5";
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
