#include "hoverbutton.h"

HoverButton::HoverButton(QWidget *parent) : QPushButton(parent)
{
}

void HoverButton::setNormalPixmap(const QPixmap &pixmap)
{
    normalPixmap = pixmap;
    updateButtonIcon();
}

void HoverButton::setHoverPixmap(const QPixmap &pixmap)
{
    hoverPixmap = pixmap;
}

void HoverButton::enterEvent(QEnterEvent *event)
{
    QPushButton::enterEvent(event);
    emit mouseEntered();
}

void HoverButton::leaveEvent(QEvent *event)
{
    QPushButton::leaveEvent(event);
    emit mouseLeft();
}

void HoverButton::updateButtonIcon()
{
    if (!normalPixmap.isNull()) {
        setIcon(normalPixmap);
    }
}
