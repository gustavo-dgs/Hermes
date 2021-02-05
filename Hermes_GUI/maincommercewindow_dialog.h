#ifndef MAINCOMMERCEWINDOW_DIALOG_H
#define MAINCOMMERCEWINDOW_DIALOG_H

#include <QDialog>

namespace Ui {
class maincommercewindow_Dialog;
}

class maincommercewindow_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit maincommercewindow_Dialog(QWidget *parent = 0);
    ~maincommercewindow_Dialog();

private:
    Ui::maincommercewindow_Dialog *ui;
};

#endif // MAINCOMMERCEWINDOW_DIALOG_H
