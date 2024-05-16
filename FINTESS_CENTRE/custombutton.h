#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H

#include "qpushbutton.h"
#include <QObject>
#include <QPropertyAnimation>
#include <QPushButton>
#include <QPropertyAnimation>

class CustomButton : public QPushButton {
    Q_OBJECT
public:
    CustomButton(QWidget *parent = nullptr) : QPushButton(parent), animation_start(false) {}

    void animation_for_button() {
        if(animation_start) {
            return;
        }
        animation_start = true;

        QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");
        animation->setDuration(200);
        QRect startRect = geometry();
        QRect endRect = QRect(startRect.left() + 5, startRect.top() + 5, startRect.width() - 10, startRect.height() - 10);
        animation->setStartValue(startRect);
        animation->setKeyValueAt(0.5, endRect);
        animation->setEndValue(startRect);
        connect(animation, &QPropertyAnimation::finished, this, &CustomButton::animationFinished);
        animation->start(QAbstractAnimation::DeleteWhenStopped);
    }

private slots:
    void animationFinished() {
        animation_start = false;
    }

private:
    bool animation_start;
};

#endif // CUSTOMBUTTON_H
