#ifndef WAREHOUSEWINDOW_DIALOG_H
#define WAREHOUSEWINDOW_DIALOG_H

#include <QDialog>

namespace Ui {
class Warehousewindow_Dialog;
}

class Warehousewindow_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Warehousewindow_Dialog(QWidget *parent = 0);
    ~Warehousewindow_Dialog();

private:
    Ui::Warehousewindow_Dialog *ui;
};

#endif // WAREHOUSEWINDOW_DIALOG_H
