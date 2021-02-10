#ifndef TIENDAHOMEWINDOW_H
#define TIENDAHOMEWINDOW_H

#include <QDialog>

namespace Ui {
class TiendaHomeWindow;
}

class TiendaHomeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TiendaHomeWindow(QWidget *parent = 0);
    ~TiendaHomeWindow();

private slots:
    void on_botonProductos_clicked();

    void on_botonEstadoOrdenes_clicked();

private:
    Ui::TiendaHomeWindow *ui;
};

#endif // TIENDAHOMEWINDOW_H
