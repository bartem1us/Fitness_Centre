#ifndef APICLIENT_H
#define APICLIENT_H

#include <QObject>
#include <QtNetwork>
#include <QJsonDocument>
#include <QJsonObject>
#include <memory>

class ApiClient :public QObject
{
    Q_OBJECT
public:
    explicit ApiClient(QObject *parent = nullptr);

    void addUser(const QString &fullname, const QString &phonenumber, const QString &hashpassword, bool isAdmin);

private slots:
    void onResult(QNetworkReply *reply);

private:
    std::shared_ptr<QNetworkAccessManager> manager;
};

#endif // APICLIENT_H
