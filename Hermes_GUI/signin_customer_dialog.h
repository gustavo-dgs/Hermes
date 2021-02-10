#ifndef SIGNIN_CUSTOMER_DIALOG_H
#define SIGNIN_CUSTOMER_DIALOG_H

#include <QDialog>

namespace Ui {
class SignIn_Customer_Dialog;
}

class SignIn_Customer_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignIn_Customer_Dialog(QWidget *parent = 0);
    ~SignIn_Customer_Dialog();

private slots:
    void on_pushButton_clicked();

    void on_botonAtras_clicked();

private:
    Ui::SignIn_Customer_Dialog *ui;
};

#endif // SIGNIN_CUSTOMER_DIALOG_H
