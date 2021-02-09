#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
#include "productowindow.h"
#include <QMainWindow>
#include "signin_dialog.h"
#include "clientewindow.h"

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

    void on_pushkharen_clicked();

    void on_pushButton_3_clicked();

    void on_cajetinCorreo_cursorPositionChanged(int arg1, int arg2);

    void on_cajetinID_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::LoginWindow *ui;
    SignIn_Dialog* signin_dialogptr;
    ProductoWindow* ventana1;
    ClienteWindow* clientePtr;


};

#endif // LOGINWINDOW_H
