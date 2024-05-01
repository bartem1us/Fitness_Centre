

#include <QApplication>
#include <QLocale>
#include <iostream>
#include <QTranslator>
#include "mainwindow.h"
#include "login.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "FINTESS_CENTRE_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow *m=new MainWindow();
    m->show();
    //login *log = new login(nullptr , std::make_shared<PostgreSQLConnection>());
    //log->show();


    return a.exec();
}
