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

    void animation_for_button();

private slots:
    void animationFinished() {
        animation_start = false;
    }

private:
    bool animation_start;
};

#endif // CUSTOMBUTTON_H
