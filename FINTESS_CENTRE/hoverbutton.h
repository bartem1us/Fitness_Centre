#ifndef HOVERBUTTON_H
#define HOVERBUTTON_H
#include <QPushButton>
#include <QPixmap>
#include <QEvent>
#include <QMouseEvent>
class HoverButton: public QPushButton
{
    Q_OBJECT
public:
    explicit HoverButton(QWidget *parent = nullptr);
    void setNormalPixmap(const QPixmap &pixmap);
    void setHoverPixmap(const QPixmap &pixmap);

protected:
    void enterEvent(QEnterEvent *event) override;
    void leaveEvent(QEvent *event) override;
signals:
    void mouseEntered();
    void mouseLeft();

private:
    QPixmap normalPixmap;
    QPixmap hoverPixmap;
    void updateButtonIcon();
};

#endif // HOVERBUTTON_H
