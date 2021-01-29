#include "Usuario.h"

Usuario::Usuario() : Entidad(){
    id_usuario = 0;
}

Usuario::Usuario(int id_usuario, std::string nombre, std::string direccion, std::string correo,
                 std::string telefono, std::string tipo_usuario)
                : Entidad(nombre, direccion, correo, telefono){

    this->id_usuario = id_usuario;
    this->tipo_usuario = tipo_usuario;
}

Usuario::~Usuario(){}

int Usuario::getId_usuario() const
{
    return id_usuario;
}

void Usuario::setId_usuario(int value)
{
    id_usuario = value;
}

std::string Usuario::getTipo_usuario() const
{
    return tipo_usuario;
}

void Usuario::setTipo_usuario(const std::string &value)
{
    tipo_usuario = value;
}

void Usuario::crear(){
    dbOperacion->prepararQuery("INSERT INTO usuarios (nombre, direccion, correo, telefono, tipo_usuario) "
                               "VALUES(?,?,?,?,?)");
    dbOperacion->agregarString(nombre);
    dbOperacion->agregarString(direccion);
    dbOperacion->agregarString(correo);
    dbOperacion->agregarString(telefono);
    dbOperacion->agregarString(tipo_usuario);

    dbOperacion->ejecutar();
}

bool Usuario::consultar(){
    sql::ResultSet *res;
    bool seEncontro;

    dbOperacion->prepararQuery("SELECT * FROM usuarios WHERE id_usuario=?");
    dbOperacion->agregarInt(id_usuario);
    res = dbOperacion->ejecutar();

    if (res->next()){
        nombre = res->getString("nombre");
        direccion = res->getString("direccion");
        correo = res->getString("correo");
        telefono = res->getString("telefono");
        tipo_usuario = res->getString("tipo_usuario");

        seEncontro = true;
    }else{
        seEncontro = false;
    }

    delete res;

    return seEncontro;
}

void Usuario::actualizar(){
    dbOperacion->prepararQuery("UPDATE usuarios SET nombre=?, direccion=?, correo=?, telefono=?, tipo_usuario=? "
                               "WHERE id_usuario = ?");
    dbOperacion->agregarString(nombre);
    dbOperacion->agregarString(direccion);
    dbOperacion->agregarString(correo);
    dbOperacion->agregarString(telefono);
    dbOperacion->agregarString(tipo_usuario);
    dbOperacion->agregarInt(id_usuario);

    dbOperacion->ejecutar();
}

void Usuario::eliminar(){
    dbOperacion->prepararQuery("DELETE FROM usuarios WHERE id_usuario = ?");

    dbOperacion->agregarInt(id_usuario);

    dbOperacion->ejecutar();
}


