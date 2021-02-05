#include "maincommercewindow_dialog.h"
#include "ui_maincommercewindow_dialog.h"

maincommercewindow_Dialog::maincommercewindow_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::maincommercewindow_Dialog)
{
    ui->setupUi(this);
}

maincommercewindow_Dialog::~maincommercewindow_Dialog()
{
    delete ui;
}
