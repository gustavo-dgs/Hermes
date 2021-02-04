#include "signin_shipping_dialog.h"
#include "ui_signin_shipping_dialog.h"
#include "signin_dialog.h"

SignIn_Dialog* SignIn_Dialog_Shipping_Backptr;

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

void SignIn_Shipping_Dialog::on_pushButton_clicked()
{
    hide();
    SignIn_Dialog_Shipping_Backptr = new SignIn_Dialog(this);
    SignIn_Dialog_Shipping_Backptr->show();
}
