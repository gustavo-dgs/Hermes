#include "signin_commerce_dialog.h"
#include "ui_signin_commerce_dialog.h"
#include "signin_dialog.h"

SignIn_Dialog* SignIn_Dialog_Commerce_Backptr;

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

void SignIn_Commerce_Dialog::on_pushButton_clicked()
{
    hide();
    SignIn_Dialog_Commerce_Backptr = new SignIn_Dialog(this);
    SignIn_Dialog_Commerce_Backptr->show();

}
