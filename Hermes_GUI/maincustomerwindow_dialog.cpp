#include "maincustomerwindow_dialog.h"
#include "ui_maincustomerwindow_dialog.h"
#include "loginwindow.h"

LoginWindow* LoginWindow_maincustomer_backptr;

MainCustomerWindow_Dialog::MainCustomerWindow_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainCustomerWindow_Dialog)
{
    ui->setupUi(this);
}

MainCustomerWindow_Dialog::~MainCustomerWindow_Dialog()
{
    delete ui;
}

void MainCustomerWindow_Dialog::on_pushButton_clicked()
{
    hide();
    LoginWindow_maincustomer_backptr = new LoginWindow (this);
    LoginWindow_maincustomer_backptr->show();

}
