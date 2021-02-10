#include "signin_dialog.h"
#include "ui_signin_dialog.h"
#include "loginwindow.h"
#include "signin_customer_dialog.h"
#include "signin_commerce_dialog.h"


LoginWindow* LoginWindow_Backptr;

SignIn_Dialog::SignIn_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn_Dialog)
{
    ui->setupUi(this);
}

SignIn_Dialog::~SignIn_Dialog()
{
    delete ui;
}


void SignIn_Dialog::on_botonCliente_clicked()
{
    typeUser = 1;
    hide();
    SignIn_Customer_Dialogptr = new SignIn_Customer_Dialog (this);
    SignIn_Customer_Dialogptr->show();
}

void SignIn_Dialog::on_botonTrasporte_clicked()
{
    typeUser = 2;
    hide();
    SignIn_Commerce_Dialogptr = new SignIn_Commerce_Dialog (this);
    SignIn_Commerce_Dialogptr->show();
}

void SignIn_Dialog::on_botonTienda_clicked()
{
    typeUser = 2;
    hide();
    SignIn_Commerce_Dialogptr = new SignIn_Commerce_Dialog (this);
    SignIn_Commerce_Dialogptr->show();
}

void SignIn_Dialog::on_botonAtras_clicked()
{

    hide();
    LoginWindow_Backptr = new LoginWindow(this);
    LoginWindow_Backptr->show();
}
