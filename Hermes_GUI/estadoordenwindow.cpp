#include "estadoordenwindow.h"
#include "ui_estadoordenwindow.h"

EstadoOrdenWindow::EstadoOrdenWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EstadoOrdenWindow)
{
    ui->setupUi(this);
    ui->comboEstadoOrden->addItem(QString("PENDIENTE"));
    ui->comboEstadoOrden->addItem(QString("APROBADA"));
    ui->comboEstadoOrden->addItem(QString("DESPACHADA"));
    ui->comboEstadoOrden->addItem(QString("ENVIADA"));
    ui->comboEstadoOrden->addItem(QString("ENTREGADA"));
}

EstadoOrdenWindow::~EstadoOrdenWindow()
{
    delete ui;
}
