#include "apiclient.h"

ApiClient::ApiClient(QObject *parent): QObject(parent){
    manager = std::make_shared<QNetworkAccessManager>(this);
    connect(manager.get(), &QNetworkAccessManager::finished, this, &ApiClient::onResult);
}

void ApiClient::onResult(QNetworkReply *reply) {

    if (reply->error() == QNetworkReply::NoError) {
        qDebug() << "Request successful!";
    } else {
        qDebug() << "Error occurred:" << reply->errorString();
    }
    reply->deleteLater();

}

void ApiClient::addUser(const QString &fullname, const QString &phonenumber, const QString &hashpassword, bool isAdmin)
{

    QUrl url("http://localhost:8080/api/clients");
    QNetworkRequest request(url);

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject json;
    json["fullname"] = fullname;
    json["phonenumber"] = phonenumber;
    json["hashpassword"] = hashpassword;
    json["is_admin"] = isAdmin;

    QJsonDocument doc(json);
    QByteArray data = doc.toJson();

    manager->post(request, data);
}


