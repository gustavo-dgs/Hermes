#include "maincustomerwindow_dialog.h"
#include "ui_maincustomerwindow_dialog.h"

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
