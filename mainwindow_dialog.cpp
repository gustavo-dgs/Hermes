#include "mainwindow_dialog.h"
#include "ui_mainwindow_dialog.h"

MainWindow_Dialog::MainWindow_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainWindow_Dialog)
{
    ui->setupUi(this);
}

MainWindow_Dialog::~MainWindow_Dialog()
{
    delete ui;
}
