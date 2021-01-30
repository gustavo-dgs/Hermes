#ifndef CLASEBASE_H
#define CLASEBASE_H
#include "DBOperacion.h"


class ClaseBase{
protected:
    DBOperacion *dbOperacion;

public:
    ClaseBase();
    virtual ~ClaseBase();
    virtual void crear();
    virtual bool consultar();
    virtual void actualizar();
    virtual void eliminar();
};

#endif // CLASEBASE_H
