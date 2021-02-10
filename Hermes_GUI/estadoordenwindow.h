#ifndef ESTADOORDENWINDOW_H
#define ESTADOORDENWINDOW_H

#include <QDialog>

namespace Ui {
class EstadoOrdenWindow;
}

class EstadoOrdenWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EstadoOrdenWindow(QWidget *parent = 0);
    ~EstadoOrdenWindow();

private:
    Ui::EstadoOrdenWindow *ui;
};

#endif // ESTADOORDENWINDOW_H
