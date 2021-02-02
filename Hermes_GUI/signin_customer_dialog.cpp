#include "signin_customer_dialog.h"
#include "ui_signin_customer_dialog.h"

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
