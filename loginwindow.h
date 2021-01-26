#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "mainwindow_dialog.h"
#include "signup_dialog.h"

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

    void on_pushButton_Login_clicked();

    void on_pushButton_SignUp_clicked();

private:
    Ui::LoginWindow *ui;

    SignUp_Dialog* signup_dialogptr;

    MainWindow_Dialog* mainwindow_dialogptr;

};

#endif // LOGINWINDOW_H
