#include "Clasebase.h"

ClaseBase::ClaseBase(){
    dbOperacion = new DBOperacion();
}

ClaseBase::~ClaseBase(){
    delete dbOperacion;
}
