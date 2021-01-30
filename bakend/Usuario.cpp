#include "Usuario.h"

Usuario::Usuario() : Entidad(){
    id_usuario = 0;
    contrasena = "";
    tipo_usuario = "";
}

Usuario::Usuario(int id_usuario, std::string nombre, std::string direccion, std::string correo, std::string contrasena,
                 std::string telefono, std::string tipo_usuario)
                : Entidad(nombre, direccion, correo, telefono){

    this->id_usuario = id_usuario;
    this->tipo_usuario = tipo_usuario;
    this->contrasena = contrasena;
}

Usuario::Usuario(std::string nombre, std::string direccion, std::string correo, std::string contrasena,
                 std::string telefono, std::string tipo_usuario)
                : Entidad(nombre, direccion, correo, telefono){

    this->id_usuario = 0;
    this->tipo_usuario = tipo_usuario;
    this->contrasena = contrasena;
}

Usuario::~Usuario(){} //delete dbOperacion;

int Usuario::getId_usuario() const
{
    return id_usuario;
}

std::string Usuario::getTipo_usuario() const
{
    return tipo_usuario;
}

void Usuario::setTipo_usuario(const std::string &value)
{
    tipo_usuario = value;
}

std::string Usuario::getContrasena() const
{
    return contrasena;
}

void Usuario::setContrasena(const std::string &value)
{
    contrasena = value;
}

void Usuario::crear(){
    dbOperacion->prepararQuery("INSERT INTO usuarios (nombre, direccion, correo, contrasena, telefono, tipo_usuario) "
                               "VALUES(?,?,?,?,?,?)");
    dbOperacion->agregarString(nombre);
    dbOperacion->agregarString(direccion);
    dbOperacion->agregarString(correo);
    dbOperacion->agregarString(contrasena);
    dbOperacion->agregarString(telefono);
    dbOperacion->agregarString(tipo_usuario);
    
    dbOperacion->ejecutar();
}

bool Usuario::consultar(std::string campo, std::string valor){
    sql::ResultSet *res;
    bool seEncontro;

    dbOperacion->prepararQuery("SELECT * FROM usuarios WHERE " + campo + "=?");
    if (campo.compare("id_usuario") == 0){
        dbOperacion->agregarInt(stoi(valor));
    }else{
        dbOperacion->agregarString(valor);
    }

    res = dbOperacion->ejecutar();

    if (res->next()){
        id_usuario = res->getInt("id_usuario");
        nombre = res->getString("nombre");
        direccion = res->getString("direccion");
        correo = res->getString("correo");
        contrasena = res->getString("contrasena");
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


