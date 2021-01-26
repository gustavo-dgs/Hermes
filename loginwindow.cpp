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

void LoginWindow::on_pushButton_Login_clicked()
{

        hide();
        mainwindow_dialogptr = new MainWindow_Dialog(this);
        mainwindow_dialogptr->show();


}

void LoginWindow::on_pushButton_SignUp_clicked()
{

    hide();
    signup_dialogptr = new SignUp_Dialog(this);
    signup_dialogptr->show();

}
