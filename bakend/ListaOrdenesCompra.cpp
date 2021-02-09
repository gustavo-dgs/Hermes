#include "ListaOrdenesCompra.h"

list<OrdenCompra> ListaOrdenesCompra::getListaOrdenesCompraDeCliente(int id_usuario){
    sql::ResultSet *res;
    DBOperacion* dbOperacion = new DBOperacion();
    int id_orden;
    OrdenCompra ordenCompra;
    std::stringstream ss;
    std::string str;
    list<OrdenCompra> lista;

    dbOperacion->prepararQuery("SELECT * FROM ordenes_compra WHERE cliente=?");
    dbOperacion->agregarInt(id_usuario);
    res = dbOperacion->ejecutar();

    while (res->next()){
        id_orden = res->getInt("id_orden");
        ss << id_orden;
        ss >> str;
        ordenCompra.consultar("id_orden", str);
        lista.push_back(ordenCompra);
    }

    delete dbOperacion;

    return lista;
}

list<OrdenCompra> ListaOrdenesCompra::getListaOrdenesCompraDeTienda(std::string rif){
    sql::ResultSet *res;
    DBOperacion* dbOperacion = new DBOperacion();
    int id_orden;
    OrdenCompra ordenCompra;
    std::stringstream ss;
    std::string str;
    list<OrdenCompra> lista;

    dbOperacion->prepararQuery("SELECT * FROM ordenes_compra WHERE tienda=?");
    dbOperacion->agregarString(rif);
    res = dbOperacion->ejecutar();

    while (res->next()){
        id_orden = res->getInt("id_orden");
        ss << id_orden;
        ss >> str;
        ordenCompra.consultar("id_orden", str);
        lista.push_back(ordenCompra);
    }

    delete dbOperacion;

    return lista;
}

list<OrdenCompra> ListaOrdenesCompra::getListaOrdenesCompraVerificadas(std::string rif){
    sql::ResultSet *res;
    DBOperacion* dbOperacion = new DBOperacion();
    int id_orden;
    OrdenCompra ordenCompra;
    std::stringstream ss;
    std::string str;
    list<OrdenCompra> lista;

    dbOperacion->prepararQuery("SELECT * FROM ordenes WHERE transporte=? AND estatus=?");
    dbOperacion->agregarString(rif);
    dbOperacion->agregarString("Verificada");
    res = dbOperacion->ejecutar();

    while (res->next()){
        id_orden = res->getInt("id_orden");
        ss << id_orden;
        ss >> str;
        ordenCompra.consultar("id_orden", str);
        lista.push_back(ordenCompra);
    }

    delete dbOperacion;

    return lista;
}

list<OrdenCompra> ListaOrdenesCompra::getListaOrdenesCompraDespachadas(std::string rif){
    sql::ResultSet *res;
    DBOperacion* dbOperacion = new DBOperacion();
    int id_orden;
    OrdenCompra ordenCompra;
    std::stringstream ss;
    std::string str;
    list<OrdenCompra> lista;

    dbOperacion->prepararQuery("SELECT * FROM ordenes WHERE transporte=? AND estatus=?");
    dbOperacion->agregarString(rif);
    dbOperacion->agregarString("Despachada");
    res = dbOperacion->ejecutar();

    while (res->next()){
        id_orden = res->getInt("id_orden");
        ss << id_orden;
        ss >> str;
        ordenCompra.consultar("id_orden", str);
        lista.push_back(ordenCompra);
    }

    delete dbOperacion;

    return lista;
}
