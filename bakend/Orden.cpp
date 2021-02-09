#include "Orden.h"

Orden::Orden(){
    this->id_orden= 0;
    this->tienda = "";
    this->transportista = 0;
    this->estatus = "Pendiente";
    this->calificacion = 0;
    this->fecha = Herramientas::getFecha();
    this->tipo = "";
}

Orden::Orden(int id_orden, std::string tienda, int transportista,
    std::string estatus, int calificacion, std::string tipo){
    this->id_orden= id_orden;
    this->tienda = tienda;
    this->transportista = transportista;
    this->estatus = estatus;
    this->calificacion = calificacion;
    this->fecha = Herramientas::getFecha();
    this->tipo = tipo;
}

Orden::Orden(int tienda, std::string tipo){
    this->id_orden = 0;
    this->tienda = tienda;
    this->transportista = 0;
    this->estatus = "Pendiente";
    this->calificacion = 0;
    this->fecha = Herramientas::getFecha();
    this->tipo = tipo;
}

Orden::~Orden(){}

int Orden::getId_orden()const{
    return id_orden;
}
void Orden::setId_orden(int value){
    id_orden=value;
}
std::string Orden::getTienda()const{
    return tienda;
}
void Orden::setTienda(const std::string &value){
    tienda=value;
}
int Orden::getTransportista()const{
    return transportista;
}
void Orden::setTransportista(int value){
    transportista=value;
}
std::string Orden::getEstatus()const{
    return estatus;
}
void Orden::setEstatus(const std::string &value){
    estatus=value;
}
int Orden::getCalificacion()const{
    return calificacion;
}
void Orden::setCalificacion(int value){
    calificacion=value;
}
std::string Orden::getTipo()const{
    return tipo;
}
void Orden::setTipo(const std::string &value){
    tipo=value;
}

void Orden::crear(){
    dbOperacion->prepararQuery("INSERT INTO ordenes (tienda, transportista, estatus, calificacion,"
                            "fecha,tipo) VALUES(?,?,?,?,?,?,?)");

    dbOperacion->agregarString(tienda);
    dbOperacion->agregarInt(transportista);
    dbOperacion->agregarString(estatus);
    dbOperacion->agregarInt(calificacion);
    dbOperacion->agregarString(fecha);
    dbOperacion->agregarString(tipo);

    dbOperacion->ejecutar();
}

bool Orden::consultar(std::string campo, std::string valor){
    sql::ResultSet *res;
    bool seEncontro;

    dbOperacion->prepararQuery("SELECT * FROM ordenes WHERE " + campo + "=?");
    if (campo.compare("id_orden") == 0){
        dbOperacion->agregarInt(stoi(valor));
    }else{
        dbOperacion->agregarString(valor);
    }

    res = dbOperacion->ejecutar();

    if (res->next()){
        id_orden = res->getInt("id_orden");
        tienda = res->getString("tienda");
        transportista = res->getInt("transportista");
        estatus = res->getString("estatus");
        calificacion = res->getInt("calificacion");
        fecha = res->getString("fecha");
        tipo = res->getString("tipo");

        seEncontro = true;

    }else{
        seEncontro = false;
    }

    delete res;

    return seEncontro;
}

void Orden::actualizar(){
    dbOperacion->prepararQuery("UPDATE ordenes SET tienda=?, transportista=?, estatus=?, calificacion=?,"
                            "fecha=?, tipo=? WHERE id_orden = ?");

    dbOperacion->agregarString(tienda);
    dbOperacion->agregarInt(transportista);
    dbOperacion->agregarString(estatus);
    dbOperacion->agregarInt(calificacion);
    dbOperacion->agregarString(fecha);
    dbOperacion->agregarString(tipo);
    dbOperacion->agregarInt(id_orden);

    dbOperacion->ejecutar();
}

void Orden::eliminar(){
    dbOperacion->prepararQuery("DELETE FROM ordenes WHERE id_orden = ?");

    dbOperacion->agregarInt(id_orden);

    dbOperacion->ejecutar();

}

void Orden::actualizarOrdenAVerificada(){
    dbOperacion->prepararQuery("UPDATE ordenes SET estatus=? WHERE id_orden=?");
    dbOperacion->agregarString("Verificada");
    dbOperacion->agregarInt(id_orden);
}

void Orden::actualizarOrdenAPorDespachar(){
    dbOperacion->prepararQuery("UPDATE estatus FORM ordenes");
    setEstatus("Por Despachar");
}

void Orden::actualizarOrdenAEnEnvio(){
    dbOperacion->prepararQuery("UPDATE ordenes SET estatus=? WHERE id_orden=?");
    dbOperacion->agregarString("En envio");
    dbOperacion->agregarInt(id_orden);
}

void Orden::actualizarOrdenAEntregada(){
    dbOperacion->prepararQuery("UPDATE ordenes SET estatus=? WHERE id_orden=?");
    dbOperacion->agregarString("Entregada");
    dbOperacion->agregarInt(id_orden);
}

void Orden::cancelarOrden(){
    dbOperacion->prepararQuery("UPDATE ordenes SET estatus=? WHERE id_orden=?");
    dbOperacion->agregarString("Cancelada");
    dbOperacion->agregarInt(id_orden);
}
