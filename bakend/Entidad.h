#ifndef ENTIDAD_H
#define ENTIDAD_H
#include <iostream>
#include <stdlib.h>


class Entidad
{
protected:
    std::string nombre;
    std::string direccion;
    std::string correo;
    std::string telefono;
    std::string tipo;

public:
    Entidad();
    Entidad(std::string, std::string, std::string, std::string, std::string);
    ~Entidad();
};

#endif // ENTIDAD_H
