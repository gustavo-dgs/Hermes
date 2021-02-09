#ifndef REGISTROPRODUCTOS_WINDOW_H
#define REGISTROPRODUCTOS_WINDOW_H

#include <QDialog>

namespace Ui {
class RegistroProductos_window;
}

class RegistroProductos_window : public QDialog
{
    Q_OBJECT

public:
    explicit RegistroProductos_window(QWidget *parent = 0);
    ~RegistroProductos_window();

private:
    Ui::RegistroProductos_window *ui;
};

#endif // REGISTROPRODUCTOS_WINDOW_H
