#include "prueba_dialog.h"
#include "ui_prueba_dialog.h"

Prueba_Dialog::Prueba_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Prueba_Dialog)
{
    ui->setupUi(this);
}

Prueba_Dialog::~Prueba_Dialog()
{
    delete ui;
}
