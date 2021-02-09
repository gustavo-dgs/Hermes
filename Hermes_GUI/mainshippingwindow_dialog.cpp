#include "mainshippingwindow_dialog.h"
#include "ui_mainshippingwindow_dialog.h"
#include <QListWidgetItem>

mainshippingwindow_Dialog::mainshippingwindow_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainshippingwindow_Dialog)
{
    ui->setupUi(this);

}

mainshippingwindow_Dialog::~mainshippingwindow_Dialog()
{
    delete ui;
}
