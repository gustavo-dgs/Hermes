#ifndef USUARIO_H
#define USUARIO_H
#include "DBOperacion.h"
#include "Clasebase.h"
#include "Entidad.h"

class Usuario: public Entidad, public ClaseBase{
private:
    std::string id_usuario;

public:
    Usuario();
    Usuario(std::string);
    ~Usuario();
};

#endif // USUARIO_H
