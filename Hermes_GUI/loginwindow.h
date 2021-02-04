#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "signin_dialog.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::LoginWindow *ui;
    SignIn_Dialog* signin_dialogptr;

};

#endif // LOGINWINDOW_H
