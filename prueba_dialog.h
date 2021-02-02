#ifndef PRUEBA_DIALOG_H
#define PRUEBA_DIALOG_H

#include <QDialog>

namespace Ui {
class Prueba_Dialog;
}

class Prueba_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Prueba_Dialog(QWidget *parent = 0);
    ~Prueba_Dialog();

private:
    Ui::Prueba_Dialog *ui;
};

#endif // PRUEBA_DIALOG_H
