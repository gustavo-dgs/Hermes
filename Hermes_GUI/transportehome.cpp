#include "transportehome.h"
#include "ui_transportehome.h"
#include <QListWidgetItem>
#include "estadoordenwindow.h"
TransporteHome::TransporteHome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TransporteHome)
{
    ui->setupUi(this);
    /*-----Item con check box-----*/
    for (int i = 0; i < 20; i++){
        QListWidgetItem *item = new QListWidgetItem();
        item->setText("orden");
        ui->listWidgetOrdenes->addItem(item);
    }
}

TransporteHome::~TransporteHome()
{
    delete ui;
}

void TransporteHome::on_listWidgetOrdenes_itemClicked(QListWidgetItem *item)
{
    EstadoOrdenWindow *estadoptr = new EstadoOrdenWindow(this);
    item->setSelected(false);
    estadoptr->setModal(true);
    estadoptr->show();


}
