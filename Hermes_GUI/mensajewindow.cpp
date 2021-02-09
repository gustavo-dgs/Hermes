#include "mensajewindow.h"
#include "ui_mensajewindow.h"

MensajeWindow::MensajeWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MensajeWindow)
{
    ui->setupUi(this);
}

MensajeWindow::~MensajeWindow()
{
    delete ui;
}
