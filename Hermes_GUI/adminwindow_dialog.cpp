#include "adminwindow_dialog.h"
#include "ui_adminwindow_dialog.h"

AdminWindow_Dialog::AdminWindow_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow_Dialog)
{
    ui->setupUi(this);
}

AdminWindow_Dialog::~AdminWindow_Dialog()
{
    delete ui;
}
