#include "registroproductos_window.h"
#include "ui_registroproductos_window.h"

RegistroProductos_window::RegistroProductos_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistroProductos_window)
{
    ui->setupUi(this);
}

RegistroProductos_window::~RegistroProductos_window()
{
    delete ui;
}
