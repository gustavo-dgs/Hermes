#ifndef CLASEBASE_H
#define CLASEBASE_H
#include "DBOperacion.h"

class ClaseBase{

protected:
    DBOperacion *dbOperacion;

public:
    ClaseBase();
    virtual ~ClaseBase() = 0;
    virtual void crear() = 0;
    virtual bool consultar(std::string, std::string) = 0;
    virtual void actualizar() = 0;
    virtual void eliminar() = 0;
};

#endif // CLASEBASE_H
