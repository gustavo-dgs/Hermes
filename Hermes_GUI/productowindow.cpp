#include "productowindow.h"
#include "ui_productowindow.h"

ProductoWindow::ProductoWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProductoWindow)
{
    ui->setupUi(this);
}

ProductoWindow::~ProductoWindow()
{
    delete ui;
}

void ProductoWindow::on_pushButton_2_clicked()
{
    /*------se agrega el producto al carrito-----------*/
    hide();
}
