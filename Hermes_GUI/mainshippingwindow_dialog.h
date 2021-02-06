#ifndef MAINSHIPPINGWINDOW_DIALOG_H
#define MAINSHIPPINGWINDOW_DIALOG_H

#include <QDialog>

namespace Ui {
class mainshippingwindow_Dialog;
}

class mainshippingwindow_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit mainshippingwindow_Dialog(QWidget *parent = 0);
    ~mainshippingwindow_Dialog();

private:
    Ui::mainshippingwindow_Dialog *ui;
};

#endif // MAINSHIPPINGWINDOW_DIALOG_H
