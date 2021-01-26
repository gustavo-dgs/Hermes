#ifndef SIGNUP_COMMERCE_DIALOG_H
#define SIGNUP_COMMERCE_DIALOG_H

#include <QDialog>

namespace Ui {
class SignUp_Commerce_Dialog;
}

class SignUp_Commerce_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp_Commerce_Dialog(QWidget *parent = 0);
    ~SignUp_Commerce_Dialog();

private:
    Ui::SignUp_Commerce_Dialog *ui;
};

#endif // SIGNUP_COMMERCE_DIALOG_H
