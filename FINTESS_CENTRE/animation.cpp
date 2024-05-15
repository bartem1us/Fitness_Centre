#include "animation.h"

void animation::animation_for_button(QPushButton* button)
{
    QPropertyAnimation *animation = new QPropertyAnimation(button, "geometry");
    animation->setDuration(200);
    QRect startRect = button->geometry();
    QRect endRect = QRect(startRect.left() + 5, startRect.top() + 5, startRect.width() - 10, startRect.height() - 10);
    animation->setStartValue(startRect);
    animation->setKeyValueAt(0.5, endRect);
    animation->setEndValue(startRect);
    animation->start(QAbstractAnimation::DeleteWhenStopped);
}
