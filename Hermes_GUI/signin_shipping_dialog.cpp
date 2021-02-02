#include "signin_shipping_dialog.h"
#include "ui_signin_shipping_dialog.h"

SignIn_Shipping_Dialog::SignIn_Shipping_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn_Shipping_Dialog)
{
    ui->setupUi(this);
}

SignIn_Shipping_Dialog::~SignIn_Shipping_Dialog()
{
    delete ui;
}
