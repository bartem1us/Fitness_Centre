

#include <QApplication>
#include <QLocale>
#include <iostream>
#include <QTranslator>
#include "mainwindow.h"
#include "login.h"
int main(int argc, char *argv[])
{
    const char *conninfo = "dbname=FitnessCentre user=postgres password=ghjynj123 hostaddr=127.0.0.1 port=5432";
    PGconn *conn = PQconnectdb(conninfo);
    if (PQstatus(conn) != CONNECTION_OK) {
        std::cout<<"123";
        PQfinish(conn); // Закрываем соединение
        return 1;
    }


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
    login *log = new login(nullptr , std::make_shared<PostgreSQLConnection>());
    log->show();


    return a.exec();
}
