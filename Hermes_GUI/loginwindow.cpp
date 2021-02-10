#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "signin_dialog.h"
#include "clientewindow.h"
#include "transportehome.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}




void LoginWindow::on_RegistroBoton_clicked()
{
    signin_dialogptr = new SignIn_Dialog(this);
    hide();
    signin_dialogptr->show();
}

void LoginWindow::on_BotonCliente_clicked()
{
   clientePtr = new ClienteWindow();
   hide();
   clientePtr->show();


}

void LoginWindow::on_botonTransporte_clicked()
{
    TransporteHome *transporteHomePtr = new TransporteHome(this);
    hide();
    transporteHomePtr->show();
}
