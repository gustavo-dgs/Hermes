#ifndef SIGNUP_CUSTOMER_DIALOG_H
#define SIGNUP_CUSTOMER_DIALOG_H

#include <QDialog>

namespace Ui {
class SignUp_Customer_Dialog;
}

class SignUp_Customer_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp_Customer_Dialog(QWidget *parent = 0);
    ~SignUp_Customer_Dialog();

private:
    Ui::SignUp_Customer_Dialog *ui;
};

#endif // SIGNUP_CUSTOMER_DIALOG_H
