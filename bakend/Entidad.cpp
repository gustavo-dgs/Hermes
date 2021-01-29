#include "Entidad.h"

Entidad::Entidad(){}

Entidad::Entidad(std::string nombre, std::string direccion, std::string correo,
                 std::string telefono, std::string tipo){
    this->nombre = nombre;
    this->direccion = direccion;
    this->correo = correo;
    this->telefono = telefono;
    this->tipo = tipo;
}

Entidad::~Entidad(){}
