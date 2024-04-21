#include "pgconnection.h"


PostgreSQLConnection::~PostgreSQLConnection() {
    if (conn.get()) {
        PQfinish(conn.get());
    }
}


std::shared_ptr<PGconn> PostgreSQLConnection::getConnection() const {
    return conn;
}
