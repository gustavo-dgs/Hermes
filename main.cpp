#include "loginwindow.h"
#include <QApplication>
#include <iostream>
#include "bakend/DBOperacion.h"
#include "bakend/Usuario.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //LoginWindow w;
    //w.show();

    DBOperacion::hacerConexion();

    Usuario* usuario = new Usuario("gustavo", "Los Olivos", "gustavo.dgs19@gmail.com",
                "familiags12", "04120833879", "cliente");
    usuario->crear();

    /*Usuario* usuario2 = new Usuario("jesus", "Los Olivos", "jesus.ags19@gmail.com",
                "homeroylisdeth", "04127259418", "tienda");
    usuario2->crear();
    delete usuario2;

    Usuario* usuario2 = new Usuario(1);

    usuario2->consultar();

    cout << usuario2->getNombre() << " " << usuario2->getDireccion() << " "
         << usuario2->getCorreo() << " " << usuario2->getContrasena() << " "
         << usuario2->getTelefono() << " " << usuario2->getTipo_usuario() << endl;*/

    delete usuario;

    DBOperacion::cerrarConexion();

    return a.exec();
}
