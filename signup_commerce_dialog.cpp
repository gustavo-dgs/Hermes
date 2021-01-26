#include "signup_commerce_dialog.h"
#include "ui_signup_commerce_dialog.h"

SignUp_Commerce_Dialog::SignUp_Commerce_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp_Commerce_Dialog)
{
    ui->setupUi(this);
}

SignUp_Commerce_Dialog::~SignUp_Commerce_Dialog()
{
    delete ui;
}
