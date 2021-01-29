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

public:
    Entidad();
    Entidad(std::string, std::string, std::string, std::string);
    ~Entidad();
    std::string getNombre() const;
    void setNombre(const std::string &value);
    std::string getDireccion() const;
    void setDireccion(const std::string &value);
    std::string getCorreo() const;
    void setCorreo(const std::string &value);
    std::string getTelefono() const;
    void setTelefono(const std::string &value);
};

#endif // ENTIDAD_H
