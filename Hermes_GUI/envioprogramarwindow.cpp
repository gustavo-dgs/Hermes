#include "envioprogramarwindow.h"
#include "ui_envioprogramarwindow.h"

EnvioProgramarWindow::EnvioProgramarWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EnvioProgramarWindow)
{
    ui->setupUi(this);
}

EnvioProgramarWindow::~EnvioProgramarWindow()
{
    delete ui;
}
