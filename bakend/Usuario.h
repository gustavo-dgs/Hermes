#ifndef USUARIO_H
#define USUARIO_H
#include "DBOperacion.h"
#include "Clasebase.h"
#include "Entidad.h"

class Usuario: public Entidad, public ClaseBase{
private:
    int id_usuario;
    std::string tipo_usuario;

public:
    Usuario();
    Usuario(int, std::string, std::string, std::string, std::string, std::string);
    ~Usuario();

    int getId_usuario() const;
    void setId_usuario(int value);
    std::string getTipo_usuario() const;
    void setTipo_usuario(const std::string &value);

    void crear();
    bool consultar();
    void actualizar();
    void eliminar();

};

#endif // USUARIO_H
