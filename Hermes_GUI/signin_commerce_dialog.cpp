#include "signin_commerce_dialog.h"
#include "ui_signin_commerce_dialog.h"

SignIn_Commerce_Dialog::SignIn_Commerce_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn_Commerce_Dialog)
{
    ui->setupUi(this);
}

SignIn_Commerce_Dialog::~SignIn_Commerce_Dialog()
{
    delete ui;
}
