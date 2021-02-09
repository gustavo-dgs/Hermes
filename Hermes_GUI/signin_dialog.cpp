#include "signin_dialog.h"
#include "ui_signin_dialog.h"
#include "loginwindow.h"
#include "signin_customer_dialog.h"


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

void SignIn_Dialog::on_pushButton_4_clicked()
{
    hide();
    LoginWindow_Backptr = new LoginWindow(this);
    LoginWindow_Backptr->show();

}

void SignIn_Dialog::on_pushButton_2_clicked()
{
    hide();
    SignIn_Customer_Dialogptr = new SignIn_Customer_Dialog (this);
    SignIn_Customer_Dialogptr->show();

}

void SignIn_Dialog::on_pushButton_3_clicked()
{
    hide();
    SignIn_Commerce_Dialogptr = new SignIn_Commerce_Dialog (this);
    SignIn_Commerce_Dialogptr->show();

}


