#include "listaproductoswindow.h"
#include "ui_listaproductoswindow.h"
#include "productowindow.h"
#include "QLineEdit"
#include <QListWidgetItem>
#include "carritowindow.h"
#include "clientewindow.h"


ListaProductosWindow::ListaProductosWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListaProductosWindow)

{

    ui->setupUi(this);
    /*---Texto Simple-------*/
   for (int i = 0; i< 20; i++){
        ui->listWidgetProductos->addItem("Producto numero " + QString::number(i) +"\t\t\t500$");
    }
    /*-----Item con check box-----*/
    /*for (int i = 0; i < 20; i++){
        QListWidgetItem *item = new QListWidgetItem();
        item->setCheckState(Qt::Unchecked);
        ui->listWidgetProductos->addItem(item);

    }*/




}


ListaProductosWindow::~ListaProductosWindow()
{
    delete ui;
}



void ListaProductosWindow::on_listWidgetProductos_itemClicked(QListWidgetItem *item)
{
    item->setSelected(false);
    ProductoWindow *productoptr = new ProductoWindow(this);
    productoptr->setModal(true);
    productoptr->show();

}

void ListaProductosWindow::on_botonCarrito_clicked()
{
    carritoptr = new CarritoWindow(this);
    carritoptr -> setModal(true);
    carritoptr->show();


}



void ListaProductosWindow::on_botonAtras_clicked()
{
    //ClienteWindow *clienteptr = new ClienteWindow();
    hide();
}
