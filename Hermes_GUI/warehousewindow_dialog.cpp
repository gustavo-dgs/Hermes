#include "warehousewindow_dialog.h"
#include "ui_warehousewindow_dialog.h"

Warehousewindow_Dialog::Warehousewindow_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Warehousewindow_Dialog)
{
    ui->setupUi(this);
}

Warehousewindow_Dialog::~Warehousewindow_Dialog()
{
    delete ui;
}
