#ifndef SIGNIN_COMMERCE_DIALOG_H
#define SIGNIN_COMMERCE_DIALOG_H

#include <QDialog>

namespace Ui {
class SignIn_Commerce_Dialog;
}

class SignIn_Commerce_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignIn_Commerce_Dialog(QWidget *parent = 0);
    ~SignIn_Commerce_Dialog();

private:
    Ui::SignIn_Commerce_Dialog *ui;
};

#endif // SIGNIN_COMMERCE_DIALOG_H
