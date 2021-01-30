#include <iostream>
#include "Clasebase.h"
#include "DBOperacion.h"
#include "Entidad.h"
#include "Usuario.h"

int main(){

    DBOperacion::hacerConexion();

    Usuario* usuario;
    Usuario* usuario2;

    /*usuario = new Usuario("gustavo", "Los Olivos", "gustavo.dgs19@gmail.com",
                "familiags12", "04120833879", "cliente");
    
    usuario->crear();

    Usuario* usuario2 = new Usuario("jesus", "Los Olivos", "jesus.ags19@gmail.com",
                "homeroylisdeth", "04127259418", "tienda");
    usuario2->crear();
    delete usuario2;*/

    /*usuario2 = new Usuario(14);

    usuario2->consultar();
    
    cout << usuario2->getNombre() << " " << usuario2->getDireccion() << " "
         << usuario2->getCorreo() << " " << usuario2->getContrasena() << " "
         << usuario2->getTelefono() << " " << usuario2->getTipo_usuario() << endl;

    delete usuario2;*/

    usuario2 = new Usuario(14);

    usuario2->setDireccion("Terrazas del Caroni");

    usuario2->actualizar();

    delete usuario2;

    DBOperacion::cerrarConexion();

    return 0;
}