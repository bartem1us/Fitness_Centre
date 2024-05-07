#ifndef PGCONNECTION_H
#define PGCONNECTION_H

#include <libpq-fe.h>
#include <memory>
class PostgreSQLConnection {
public:
    PostgreSQLConnection()=default;
    ~PostgreSQLConnection();

    std::shared_ptr<PGconn> getConnection() const;

private:
    //PGconn *connn = PQconnectdb("dbname=FitnessCentre user=postgres password=ghjynj123 hostaddr=127.0.0.1 port=5432");
    //std::shared_ptr<PGconn> conn = std::make_shared<PGconn>(PQconnectdb("dbname=FitnessCentre user=postgres password=ghjynj123 hostaddr=127.0.0.1 port=5432"), PQfinish);
    std::shared_ptr<PGconn> conn=std::shared_ptr<PGconn>(PQconnectdb("dbname=FitnessCentre user=postgres password=ghjynj123 host=localhost port=5432"), PQfinish);
};

#endif // PGCONNECTION_H
