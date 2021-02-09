#include "carritowindow.h"
#include "ui_carritowindow.h"

CarritoWindow::CarritoWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CarritoWindow)
{
    ui->setupUi(this);
}

CarritoWindow::~CarritoWindow()
{
    delete ui;
}
