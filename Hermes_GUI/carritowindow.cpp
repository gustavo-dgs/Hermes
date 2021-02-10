#include "carritowindow.h"
#include "ui_carritowindow.h"
#include <QListWidgetItem>
CarritoWindow::CarritoWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CarritoWindow)
{
    ui->setupUi(this);
    /*-----Item con check box-----*/
    for (int i = 0; i < 20; i++){
        QListWidgetItem *item = new QListWidgetItem();
        item->setCheckState(Qt::Unchecked);
        ui->listWidgetProductos->addItem(item);
        item->setText("producto");
        ui->listWidgetProductos->addItem(item);

    }
}

CarritoWindow::~CarritoWindow()
{
    delete ui;
}
