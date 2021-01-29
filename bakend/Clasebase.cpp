#include "Clasebase.h"

ClaseBase::ClaseBase(){
    dbOperacion = new DBOperacion();
}

ClaseBase::~ClaseBase(){
    delete dbOperacion;
}

void ClaseBase::crear(){}
bool ClaseBase::consultar(){return false;}
void ClaseBase::actualizar(){}
void ClaseBase::eliminar(){}
