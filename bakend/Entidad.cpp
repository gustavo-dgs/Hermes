#include "Entidad.h"

Entidad::Entidad(){
    this->nombre = "";
    this->direccion = "";
    this->correo = "";
    this->telefono = "";
}

Entidad::Entidad(std::string nombre, std::string direccion, std::string correo,
                 std::string telefono){
    this->nombre = nombre;
    this->direccion = direccion;
    this->correo = correo;
    this->telefono = telefono;
}

Entidad::~Entidad(){}

std::string Entidad::getNombre() const
{
    return nombre;
}

void Entidad::setNombre(const std::string &value)
{
    nombre = value;
}

std::string Entidad::getDireccion() const
{
    return direccion;
}

void Entidad::setDireccion(const std::string &value)
{
    direccion = value;
}

std::string Entidad::getCorreo() const
{
    return correo;
}

void Entidad::setCorreo(const std::string &value)
{
    correo = value;
}

std::string Entidad::getTelefono() const
{
    return telefono;
}

void Entidad::setTelefono(const std::string &value)
{
    telefono = value;
}
