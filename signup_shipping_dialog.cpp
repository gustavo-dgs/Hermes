#include "signup_shipping_dialog.h"
#include "ui_signup_shipping_dialog.h"

SignUp_Shipping_Dialog::SignUp_Shipping_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp_Shipping_Dialog)
{
    ui->setupUi(this);
}

SignUp_Shipping_Dialog::~SignUp_Shipping_Dialog()
{
    delete ui;
}
