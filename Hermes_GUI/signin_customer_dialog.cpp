#include "signin_customer_dialog.h"
#include "ui_signin_customer_dialog.h"
#include "signin_dialog.h"

SignIn_Dialog* SignIn_Dialog_Customer_Backptr;

SignIn_Customer_Dialog::SignIn_Customer_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn_Customer_Dialog)
{
    ui->setupUi(this);
}

SignIn_Customer_Dialog::~SignIn_Customer_Dialog()
{
    delete ui;
}

void SignIn_Customer_Dialog::on_pushButton_clicked()
{
    hide();
    SignIn_Dialog_Customer_Backptr = new SignIn_Dialog(this);
    SignIn_Dialog_Customer_Backptr->show();

}
