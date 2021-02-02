#ifndef SIGNIN_SHIPPING_DIALOG_H
#define SIGNIN_SHIPPING_DIALOG_H

#include <QDialog>

namespace Ui {
class SignIn_Shipping_Dialog;
}

class SignIn_Shipping_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignIn_Shipping_Dialog(QWidget *parent = 0);
    ~SignIn_Shipping_Dialog();

private:
    Ui::SignIn_Shipping_Dialog *ui;
};

#endif // SIGNIN_SHIPPING_DIALOG_H
