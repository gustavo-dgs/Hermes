#ifndef LISTAPRODUCTOSWINDOW_H
#define LISTAPRODUCTOSWINDOW_H
#include <QDialog>
#include <QListWidgetItem>
#include "carritowindow.h"
namespace Ui {
class ListaProductosWindow;
}

class ListaProductosWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ListaProductosWindow(QWidget *parent = 0);
    ~ListaProductosWindow();

private slots:
    void on_pushButton_clicked();

    void on_listWidgetProductos_itemClicked(QListWidgetItem *item);

    void on_botonCarrito_clicked();

    void on_botonAtras_clicked();

private:
    Ui::ListaProductosWindow *ui;
private:
    CarritoWindow *carritoptr;
};

#endif // LISTAPRODUCTOSWINDOW_H
