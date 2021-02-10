#include "tiendahomewindow.h"
#include "ui_tiendahomewindow.h"
#include "registroproductos_window.h"
#include <QListWidgetItem>

TiendaHomeWindow::TiendaHomeWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TiendaHomeWindow)
{
    ui->setupUi(this);
}

TiendaHomeWindow::~TiendaHomeWindow()
{
    delete ui;
}

void TiendaHomeWindow::on_botonProductos_clicked()
{
    RegistroProductos_window *registroptr = new RegistroProductos_window();
    registroptr->setModal(true);
    registroptr->show();
}

void TiendaHomeWindow::on_botonEstadoOrdenes_clicked()
{
    ;

    for(int i = 0; i < 20; i++){
        QListWidgetItem *item = new QListWidgetItem();
        item->setText(QString("Estado"));
        ui->listWidget->addItem(item);
    }
}
