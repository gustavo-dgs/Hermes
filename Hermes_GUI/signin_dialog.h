#ifndef SIGNIN_DIALOG_H
#define SIGNIN_DIALOG_H

#include <QDialog>

namespace Ui {
class SignIn_Dialog;
}

class SignIn_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignIn_Dialog(QWidget *parent = 0);
    ~SignIn_Dialog();

private:
    Ui::SignIn_Dialog *ui;
};

#endif // SIGNIN_DIALOG_H
