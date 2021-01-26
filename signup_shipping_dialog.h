#ifndef SIGNUP_SHIPPING_DIALOG_H
#define SIGNUP_SHIPPING_DIALOG_H

#include <QDialog>

namespace Ui {
class SignUp_Shipping_Dialog;
}

class SignUp_Shipping_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp_Shipping_Dialog(QWidget *parent = 0);
    ~SignUp_Shipping_Dialog();

private:
    Ui::SignUp_Shipping_Dialog *ui;
};

#endif // SIGNUP_SHIPPING_DIALOG_H
