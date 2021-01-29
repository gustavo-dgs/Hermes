#ifndef DBOPERACION_H
#define DBOPERACION_H
#include <stdlib.h>
#include <iostream>
#include "mysql_connection.h"
#include "mysql_driver.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

using namespace std;

class DBOperacion{

private:
    sql::Connection *con;
    sql::PreparedStatement  *prep_stmt;
    int i;
    std::string query;

    bool isConsulta(const std::string &query);

public:
    DBOperacion();
    ~DBOperacion();
    bool hacerConexion();
    sql::ResultSet* ejecutarQuery(const std::string &);
    void prepararQuery(const std::string &);
    void agregarInt(const int);
    void agregarString(const std::string &);
    sql::ResultSet* ejecutar();
};

#endif // DBOPERACION_H
