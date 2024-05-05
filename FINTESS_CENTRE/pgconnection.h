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

};

#endif // PGCONNECTION_H
