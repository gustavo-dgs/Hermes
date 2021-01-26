#ifndef SIGNUP_DIALOG_H
#define SIGNUP_DIALOG_H

#include <QDialog>
#include "signup_customer_dialog.h"
#include "signup_commerce_dialog.h"
#include "signup_shipping_dialog.h"


namespace Ui {
class SignUp_Dialog;
}

class SignUp_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp_Dialog(QWidget *parent = 0);
    ~SignUp_Dialog();

private slots:

    void on_pushButton_SignUp_Customer_clicked();

    void on_pushButton_SignUp_Commerce_clicked();

    void on_pushButton_SignUp_Shipping_clicked();

private:
    Ui::SignUp_Dialog *ui;
    SignUp_Customer_Dialog* signup_customer_dialogptr;
    SignUp_Commerce_Dialog* signup_commerce_dialogptr;
    SignUp_Shipping_Dialog* signup_shipping_dialogptr;
};

#endif // SIGNUP_DIALOG_H
