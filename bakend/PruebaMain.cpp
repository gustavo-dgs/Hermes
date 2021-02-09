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
    delete usuario;

    usuario2 = new Usuario("jesus", "Los Olivos", "jesus.ags19@gmail.com",
                "homeroylisdeth", "04127259418", "tienda");
    usuario2->crear();
    delete usuario2;*/

    /*usuario2 = new Usuario();

    usuario2->consultar("id_usuario", "17");
    
    cout << usuario2->getId_usuario() << " " << usuario2->getNombre() << " " << usuario2->getDireccion() << " "
         << usuario2->getCorreo() << " " << usuario2->getContrasena() << " "
         << usuario2->getTelefono() << " " << usuario2->getTipo_usuario() << endl;

    delete usuario2;*/

    /*usuario2 = new Usuario();

    usuario2->consultar("nombre", "jesus");

    usuario2->setDireccion("Los altos del caroni");

    usuario2->actualizar();

    delete usuario2;*/

    usuario2 = new Usuario();

    usuario2->consultar("nombre", "jesus");

    usuario2->eliminar();

    delete usuario2;

    DBOperacion::cerrarConexion();

    return 0;
}
