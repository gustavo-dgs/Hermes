#include "DBOperacion.h"

sql::Connection* DBOperacion::con;

DBOperacion::DBOperacion(){
    prep_stmt = NULL;
    query = "";
    i = 0;
}

DBOperacion::~DBOperacion(){
    if (prep_stmt != NULL)
    delete prep_stmt;
}

bool DBOperacion::hacerConexion(){

    try{
        sql::Driver *driver;
        sql::ConnectOptionsMap connection_properties;

        /*connection_properties["hostName"] = "tcp://remotemysql.com";
        connection_properties["userName"] = "BUFJ4xC2oU";
        connection_properties["password"] = "2RFRR3gbjn";
        connection_properties["schema"] = "BUFJ4xC2oU";*/

        connection_properties["hostName"] = "127.0.0.1";
        connection_properties["userName"] = "gustavo";
        connection_properties["password"] = "Cromatismo12#b";
        connection_properties["schema"] = "prueba";

        connection_properties["port"] = 3306;
        connection_properties["OPT_RECONNECT"] = true;
        connection_properties["OPT_CONNECT_TIMEOUT"] = 10;
        connection_properties["OPT_READ_TIMEOUT"] = 10;
        connection_properties["OPT_WRITE_TIMEOUT"] = 10;

        driver = sql::mysql::get_driver_instance();
        con = driver->connect(connection_properties);

    }catch (sql::SQLException &e) {
        cout << "# ERR: SQLException in " << __FILE__;
        cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
        cout << "# ERR: " << e.what();
        cout << " (MySQL error code: " << e.getErrorCode();
        cout << ", SQLState: " << e.getSQLState() << " )" << endl;
        return false;
    }

    return true;
}

bool DBOperacion::isConsulta(const std::string &query){
    size_t found1 = query.find("SELECT");
    size_t found2 = query.find("select");

    return found1 != std::string::npos || found2 != std::string::npos;
}

sql::ResultSet* DBOperacion::ejecutarQuery(const std::string &query){

    sql::Statement *stmt;
    sql::ResultSet  *res;

    stmt = con->createStatement();

    if (!isConsulta(query)){

        stmt->execute(query);
        res = NULL;

    }else{

        res = stmt->executeQuery(query);

    }

    delete stmt;
    return res;

}

void DBOperacion::prepararQuery(const std::string &query){
    prep_stmt = con->prepareStatement(query);
    this->query = query;
    i = 0;
}

void DBOperacion::agregarInt(const int valor){
    prep_stmt->setInt(++i, valor);
}

void DBOperacion::agregarString(const std::string &valor){
    prep_stmt->setString(++i, valor);
}

sql::ResultSet* DBOperacion::ejecutar(){

    sql::ResultSet  *res;

    if (!isConsulta(query)){

        prep_stmt->execute();
        res = NULL;

    }else{

        res = prep_stmt->executeQuery();

    }

    delete prep_stmt;
    prep_stmt = NULL;
    return res;
}

void DBOperacion::cerrarConexion(){
    delete con;
}
