#include "OrdenCompra.h"

OrdenCompra::OrdenCompra() : Orden(){
    this->cliente = 0;
    this->total = 0;
    this->tipo_de_pago = "";
    this->tipo = "venta";
}

OrdenCompra::OrdenCompra(int id_orden, std::string tienda, int transportista,
                        std::string estatus, int calificacion, std::string tipo,
                        int cliente, int total, std::string tipo_de_pago)
    : Orden(id_orden, tienda, transportista, estatus, calificacion, tipo){

    this->cliente = cliente;
    this->total = total;
    this->tipo_de_pago = tipo_de_pago;
}

OrdenCompra::OrdenCompra(int tienda, int cliente) : Orden(tienda, "Venta"){
    this->cliente = cliente;
    this->total = 0;
    this->tipo_de_pago = "";
}

OrdenCompra::~OrdenCompra(){}

int OrdenCompra::getId_orden()const{
    return id_orden;
}
void OrdenCompra::setId_orden(int value){
    id_orden=value;
}
int OrdenCompra::getCliente()const{
    return cliente;
}
void OrdenCompra::setCliente(int value){
    cliente=value;
}
int OrdenCompra::getTotal()const{
    return total;
}
void OrdenCompra::setTotal(int value){
    total=value;
}
std::string OrdenCompra::getTipo_de_pago()const{
    return tipo_de_pago;
}
void OrdenCompra::setTipo_de_pago(const std::string &value){
    tipo_de_pago=value;
}
unordered_map<int, int> OrdenCompra::getCarrito() const
{
    return carrito;
}


void OrdenCompra::crear(){

    Orden::crear();

    sql::ResultSet *res;
    dbOperacion->prepararQuery("SELECT MAX(id_orden) AS id FROM ordenes)");
    res = dbOperacion->ejecutar();
    res->next();
    id_orden = res->getInt("id_orden");

    dbOperacion->prepararQuery("INSERT INTO ordenes_compra (id_orden, cliente, total,"
                            "tipo_de_pago) VALUES(?,?,?,?)");

    dbOperacion->agregarInt(id_orden);
    dbOperacion->agregarInt(cliente);
    dbOperacion->agregarInt(total);
    dbOperacion->agregarString(tipo_de_pago);

    dbOperacion->ejecutar();
}

bool OrdenCompra::consultar(std::string campo, std::string valor){

    Orden::consultar(campo, valor);

    sql::ResultSet *res;
    bool seEncontro;

    dbOperacion->prepararQuery("SELECT * FROM ordenes_compra WHERE " + campo + "=?");
    if (campo.compare("id_orden") == 0){
        dbOperacion->agregarInt(stoi(valor));
    }else{
        dbOperacion->agregarString(valor);
    }

    res = dbOperacion->ejecutar();

    if (res->next()){
        id_orden = res->getInt("id_orden");
        cliente = res->getInt("cliente");
        total = res->getInt("total");
        tipo_de_pago = res->getString("tipo_de_pago");

        seEncontro = true;

    }else{
        seEncontro = false;
    }

    delete res;

    return seEncontro;
}

void OrdenCompra::actualizar(){
    dbOperacion->prepararQuery("UPDATE ordenes_compra SET tienda=?, cliente=?, total=?, tipo_de_pago=?,"
                            "fecha=?, tipo=? WHERE id_orden = ?");
    dbOperacion->agregarInt(id_orden);
    dbOperacion->agregarInt(cliente);
    dbOperacion->agregarInt(total);
    dbOperacion->agregarString(tipo_de_pago);

    dbOperacion->ejecutar();
}

void OrdenCompra::eliminar(){
    dbOperacion->prepararQuery("DELETE FROM ordenes_compra WHERE id_orden = ?");

    dbOperacion->agregarInt(id_orden);

    dbOperacion->ejecutar();
}

void OrdenCompra::agregarProducto(int id_producto, int cantidad){
    carrito[id_producto] = cantidad;
}

void OrdenCompra::eliminarProducto(int posicion){
    carrito.erase(posicion);
}

unordered_map<int, int>:: iterator OrdenCompra::gatCarritoIterator(){
    return carrito.begin();
}

void OrdenCompra::calcularTotal(){
     std::stringstream ss;
     std::string str;

    unordered_map<int, int>:: iterator itr;

    for (itr = carrito.begin(); itr != carrito.end(); itr++){
        Producto producto;

        ss << itr->first;
        ss >> str;
        producto.consultar("id_producto", str);
        total += producto.getPrecio()*itr->second;
    }

    total = total+(total*0.12); //IVA
}

void OrdenCompra::efectuarCompra(){
    if (carrito.empty()) return;

    std::stringstream ss;
    std::string str;
    unordered_map<int, int>:: iterator itr;



    for (itr = carrito.begin(); itr != carrito.end(); itr++){

        dbOperacion->prepararQuery("INSERT INTO ordenes_detalle (id_orden, producto, cantidad) "
                                "VALUES(?,?,?)");

        dbOperacion->agregarInt(id_orden);
        dbOperacion->agregarInt(itr->first);
        dbOperacion->agregarInt(itr->second);

        dbOperacion->ejecutar();

    }

}
