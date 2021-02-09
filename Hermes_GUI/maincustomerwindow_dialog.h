#ifndef MAINCUSTOMERWINDOW_DIALOG_H
#define MAINCUSTOMERWINDOW_DIALOG_H

#include <QDialog>

namespace Ui {
class MainCustomerWindow_Dialog;
}

class MainCustomerWindow_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit MainCustomerWindow_Dialog(QWidget *parent = 0);
    ~MainCustomerWindow_Dialog();

private:
    Ui::MainCustomerWindow_Dialog *ui;
};

#endif // MAINCUSTOMERWINDOW_DIALOG_H
