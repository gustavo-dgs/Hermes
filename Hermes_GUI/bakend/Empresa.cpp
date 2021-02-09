#include "Empresa.h"

Empresa::Empresa() : Entidad()
{
    this->rif = "";
    this->gerente = 0;
    this->tipo_empresa = "";
    this->ranking = 0;
}

Empresa::Empresa(std::string rif, std::string nombre, int gerente, std::string direccion,
        std::string correo, std::string telefono, std::string tipo_empresa)
    : Entidad(nombre, direccion, correo, telefono)
{
    this->rif = rif;
    this->gerente = gerente;
    this->tipo_empresa = tipo_empresa;
    this->ranking = 0;
}

Empresa::Empresa(std::string rif, std::string nombre, std::string direccion,
        std::string correo, std::string telefono, std::string tipo_empresa)
    : Entidad(nombre, direccion, correo, telefono)
{
    this->rif = rif;
    this->gerente = 0;
    this->tipo_empresa = tipo_empresa;
    this->ranking = 0;
}

Empresa::~Empresa(){}

std::string Empresa::getRif() const
{
    return rif;
}

void Empresa::setRif(const std::string &value)
{
    rif = value;
}

int Empresa::getGerente() const
{
    return gerente;
}

void Empresa::setGerente(int value)
{
    gerente = value;
}

std::string Empresa::getTipo_empresa() const
{
    return tipo_empresa;
}

void Empresa::setTipo_empresa(const std::string &value)
{
    tipo_empresa = value;
}

int Empresa::getRanking() const
{
    return ranking;
}

void Empresa::setRanking(int value)
{
    ranking = value;
}

void Empresa::crear(){
    dbOperacion->prepararQuery("INSERT INTO empresas (rif, nombre, gerente, direccion, correo, telefono, "
                               "tipo_empresa, ranking) VALUES(?,?,?,?,?,?,?,?)");
    dbOperacion->agregarString(rif);
    dbOperacion->agregarString(nombre);
    dbOperacion->agregarInt(gerente);
    dbOperacion->agregarString(direccion);
    dbOperacion->agregarString(correo);
    dbOperacion->agregarString(telefono);
    dbOperacion->agregarString(tipo_empresa);
    dbOperacion->agregarInt(ranking);

    dbOperacion->ejecutar();
}

bool Empresa::consultar(std::string campo, std::string valor){
    sql::ResultSet *res;
    bool seEncontro;

    dbOperacion->prepararQuery("SELECT * FROM empresas WHERE " + campo + "=?");
    if (campo.compare("id_gerente") == 0){
        dbOperacion->agregarInt(stoi(valor));
    }else{
        dbOperacion->agregarString(valor);
    }

    res = dbOperacion->ejecutar();

    if (res->next()){
        rif = res->getString("rif");
        nombre = res->getString("nombre");
        gerente = res->getInt("gerente");
        direccion = res->getString("direccion");
        correo = res->getString("correo");
        telefono = res->getString("telefono");
        tipo_empresa = res->getString("tipo_empresa");
        ranking = res->getInt("ranking");

        seEncontro = true;

    }else{
        seEncontro = false;
    }

    delete res;

    return seEncontro;
}

void Empresa::actualizar(){
    dbOperacion->prepararQuery("UPDATE empresas SET rif=?, nombre=?, gerente=?, direccion=?, correo=?, telefono=?, "
                               "tipo_empresa=?, ranking=? WHERE rif = ?");
    dbOperacion->agregarString(rif);
    dbOperacion->agregarString(nombre);
    dbOperacion->agregarInt(gerente);
    dbOperacion->agregarString(direccion);
    dbOperacion->agregarString(correo);
    dbOperacion->agregarString(telefono);
    dbOperacion->agregarString(tipo_empresa);
    dbOperacion->agregarInt(ranking);

    dbOperacion->ejecutar();
}

void Empresa::eliminar(){
    dbOperacion->prepararQuery("DELETE FROM empresas WHERE rif = ?");

    dbOperacion->agregarString(rif);

    dbOperacion->ejecutar();
}

list<Usuario*>* Empresa::getListaEmpleados(){
    list<Usuario*>* listaEmpleados = new list<Usuario*>();
    sql::ResultSet *res;
    Usuario* usuario;
    int id_usuario;

    dbOperacion->prepararQuery("SELECT id_usuario FROM empleados WHERE rif=?");
    dbOperacion->agregarString(rif);
    res = dbOperacion->ejecutar();

    while (res->next()){
        id_usuario = res->getInt("id_usuario");
        usuario = new Usuario();
        usuario->consultar("id_usuario", std::to_string(id_usuario));
        listaEmpleados->push_back(usuario);
    }

    return listaEmpleados;
}
