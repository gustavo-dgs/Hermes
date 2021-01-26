#include "signup_dialog.h"
#include "ui_signup_dialog.h"

SignUp_Dialog::SignUp_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp_Dialog)
{
    ui->setupUi(this);
}

SignUp_Dialog::~SignUp_Dialog()
{
    delete ui;
}


void SignUp_Dialog::on_pushButton_SignUp_Customer_clicked()
{

    hide();
    signup_customer_dialogptr = new SignUp_Customer_Dialog(this);
    signup_customer_dialogptr->show();



}

void SignUp_Dialog::on_pushButton_SignUp_Commerce_clicked()
{

    hide();
    signup_commerce_dialogptr = new SignUp_Commerce_Dialog(this);
    signup_commerce_dialogptr->show();

}

void SignUp_Dialog::on_pushButton_SignUp_Shipping_clicked()
{

    hide();
    signup_shipping_dialogptr = new SignUp_Shipping_Dialog(this);
    signup_shipping_dialogptr->show();

}
