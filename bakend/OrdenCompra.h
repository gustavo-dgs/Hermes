#ifndef ORDENVENTA_H
#define ORDENVENTA_H
#include "DBOperacion.h"
#include "Clasebase.h"
#include "Orden.h"
#include "Usuario.h"
#include "Producto.h"
#include <unordered_map>
#include <sstream>

class OrdenCompra : public Orden{
protected:
    int id_orden;
    int cliente;
    int total;
    std::string tipo_de_pago;
    unordered_map<int, int> carrito;

public:
    OrdenCompra();
    OrdenCompra(int id_orden, std::string tienda, int transportista,
                std::string estatus, int calificacion, std::string tipo,
                int cliente, int total, std::string tipo_de_pago);
    OrdenCompra(int tienda, int cliente);
    ~OrdenCompra();

    int getId_orden()const;
    void setId_orden(int value);
    int getCliente()const;
    void setCliente(int value);
    int getTotal()const;
    void setTotal(int value);
    std::string getTipo_de_pago()const;
    void setTipo_de_pago(const std::string &value);

    void crear();
    bool consultar(std::string,std::string);
    void actualizar();
    void eliminar();

    void agregarProducto(int id_producto, int cantidad);
    void eliminarProducto(int posicion);
    unordered_map<int, int>:: iterator gatCarritoIterator();
    void calcularTotal();
    unordered_map<int, int> getCarrito() const;
    void efectuarCompra();
};

#endif
