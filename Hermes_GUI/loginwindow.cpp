#include "loginwindow.h"
#include "ui_loginwindow.h"

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

void LoginWindow::on_pushButton_2_clicked()
{

    hide();
    signin_dialogptr = new SignIn_Dialog(this);
    signin_dialogptr->show();
}

void LoginWindow::on_pushkharen_clicked()
{
    //ProductoWindow *ventana1
    ventana1 = new ProductoWindow(this);
    ventana1 -> hide();
    ventana1 ->show();

    //ventana1 -> setVisible(true);


}

void LoginWindow::on_pushButton_3_clicked()
{
    clientePtr = new ClienteWindow(this);
    hide();
    clientePtr ->show();
}

void LoginWindow::on_cajetinCorreo_cursorPositionChanged(int arg1, int arg2)
{
    //i->cajetinCorreo->setText("");
    ui->cajetinCorreo->selectAll();
}

void LoginWindow::on_cajetinID_cursorPositionChanged(int arg1, int arg2)
{
    ui->cajetinID->setText("");
    ui->cajetinID->Password;

}
