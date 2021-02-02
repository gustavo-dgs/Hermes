#include "signin_dialog.h"
#include "ui_signin_dialog.h"

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
