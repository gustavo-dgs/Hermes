#ifndef LISTAORDENESCOMPRA_H
#define LISTAORDENESCOMPRA_H
#include "OrdenCompra.h"
#include "sstream"

class ListaOrdenesCompra
{
public:
    static list<OrdenCompra> getListaOrdenesCompraDeCliente(int id_usuario);
    static list<OrdenCompra> getListaOrdenesCompraDeTienda(std::string rif);
    static list<OrdenCompra> getListaOrdenesCompraVerificadas(std::string rif);
    static list<OrdenCompra> getListaOrdenesCompraDespachadas(std::string rif);
};

#endif // LISTAORDENESCOMPRA_H
