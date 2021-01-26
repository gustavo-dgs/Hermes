#include "signup_customer_dialog.h"
#include "ui_signup_customer_dialog.h"

SignUp_Customer_Dialog::SignUp_Customer_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp_Customer_Dialog)
{
    ui->setupUi(this);
}

SignUp_Customer_Dialog::~SignUp_Customer_Dialog()
{
    delete ui;
}
