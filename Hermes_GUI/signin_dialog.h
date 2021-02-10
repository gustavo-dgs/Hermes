#ifndef SIGNIN_DIALOG_H
#define SIGNIN_DIALOG_H

#include <QDialog>
#include "signin_commerce_dialog.h"
#include "signin_customer_dialog.h"


namespace Ui {
class SignIn_Dialog;
}

class SignIn_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignIn_Dialog(QWidget *parent = 0);
    ~SignIn_Dialog();

private slots:


    void on_botonCliente_clicked();

    void on_botonTrasporte_clicked();

    void on_botonTienda_clicked();

    void on_botonAtras_clicked();
public:
    int typeUser = 0;
private:
    Ui::SignIn_Dialog *ui;
    SignIn_Commerce_Dialog* SignIn_Commerce_Dialogptr;
    SignIn_Customer_Dialog* SignIn_Customer_Dialogptr;
};

#endif // SIGNIN_DIALOG_H
