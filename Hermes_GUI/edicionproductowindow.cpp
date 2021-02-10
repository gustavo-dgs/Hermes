#include "edicionproductowindow.h"
#include "ui_edicionproductowindow.h"

EdicionProductoWindow::EdicionProductoWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EdicionProductoWindow)
{
    ui->setupUi(this);
}

EdicionProductoWindow::~EdicionProductoWindow()
{
    delete ui;
}
