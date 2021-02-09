#include "clientewindow.h"
#include "ui_clientewindow.h"
#include <QListWidgetItem>
#include "listaproductoswindow.h"
ClienteWindow::ClienteWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClienteWindow)
{
    ui->setupUi(this);
    esconder_categorias();
    mostrar_productos();
}

/*ClienteWindow::Mostrar_Productos(){
    QListWidgetItem *item = new QListWidgetItem();
    ui->listWidgetProductos->addItem("Hola dfeo");
}*/


void ClienteWindow::mostrar_productos()
{
    if (flagEstado)
        flagEstado = false;

    flagTienda = true;
    for ( int i = 0; i<20; i++){
        QListWidgetItem *item = new QListWidgetItem();
        item->setText("Producto\t " + QString::number(i));
        ui->listWidgetProductos->addItem(item);
    }

}
void ClienteWindow::mostrar_categorias(){

    if (flagTienda)
        flagTienda = false;

    if (flagEstado)
        flagEstado = false;

    flagCategoria = true;
    ui->listWidgetProductos->clear();

    ui->listWidgetProductos->setVisible(false);
    ui->listWidgetComida->setVisible(true);
    ui->listWidgetBebidas->setVisible(true);
    ui->listWidgetCuidadoP->setVisible(true);
    ui->listWidgetEntretenimiento->setVisible(true);
    ui->listWidgetLimpieza->setVisible(true);
}
void ClienteWindow::esconder_categorias(){

    ui->listWidgetBebidas->setVisible(false);
    ui->listWidgetComida->setVisible(false);
    ui->listWidgetCuidadoP->setVisible(false);
    ui->listWidgetEntretenimiento->setVisible(false);
    ui->listWidgetLimpieza->setVisible(false);
}
void ClienteWindow:: mostrar_tiendas(){
    if (flagEstado)
        flagEstado = false;
    flagTienda = true;
    for ( int i = 0; i<20; i++){
        QListWidgetItem *item = new QListWidgetItem();
        item->setText("Tienda\t " + QString::number(i));
        ui->listWidgetProductos->addItem(item);
    }
}

void ClienteWindow:: mostrar_estados_ordenes(){
    if (flagTienda)
        flagTienda = false;
    flagEstado = true;


    ui->listWidgetProductos->clear();

    for(int i = 0; i < 20 ; i++){
        QListWidgetItem *item = new QListWidgetItem();
        item->setText("Estado\t " + QString::number(i));
        ui->listWidgetProductos->addItem(item);
    }
}

ClienteWindow::~ClienteWindow()
{
    delete ui;
}

void ClienteWindow::on_botonCategorias_clicked()
{

    mostrar_categorias();
}

void ClienteWindow::on_botonProductos_clicked()
{   if (flagCategoria){
         esconder_categorias();
         ui->listWidgetProductos->setVisible(true);
         flagCategoria = false;
    }
    ui->listWidgetProductos->clear();
    mostrar_productos();
}

void ClienteWindow::on_botonTienda_clicked()
{
    if (flagCategoria){
        esconder_categorias();
        ui->listWidgetProductos->setVisible(true);
        flagCategoria = false;
    }
    ui->listWidgetProductos->clear();
    mostrar_tiendas();

}

void ClienteWindow::on_botonEstadoOrdenes_clicked()
{
    if (flagCategoria){
        esconder_categorias();
        ui->listWidgetProductos->setVisible(true);
        flagCategoria = false;
    }
    mostrar_estados_ordenes();

}

void ClienteWindow::on_listWidgetProductos_itemClicked(QListWidgetItem *item)
{

   if (flagTienda){
       ListaProductosWindow *tienda = new ListaProductosWindow(this);
       tienda -> setModal(true);
       tienda->show();
       item ->setSelected(false);
       /**--CODIGO PARA LLENAR LA BARRA DE BUSQUEDA CON EL PRODUCTO QUE TOMO +  aqui hay que utilizar una variable global*/
     }
   if (flagEstado){

   }

}
