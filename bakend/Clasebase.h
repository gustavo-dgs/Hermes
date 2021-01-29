#ifndef CLASEBASE_H
#define CLASEBASE_H
#include "DBOperacion.h"


class ClaseBase{

public:
    ClaseBase();
    ~ClaseBase();
    virtual void crear();
    virtual void consultar();
    virtual void actualizar();
    virtual void eliminar();
};

#endif // CLASEBASE_H
