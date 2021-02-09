#ifndef CLIENTEWINDOW_H
#define CLIENTEWINDOW_H
#include <QListWidgetItem>

#include <QDialog>

namespace Ui {
class ClienteWindow;
}

class ClienteWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ClienteWindow(QWidget *parent = 0);
    ~ClienteWindow();

private :
    bool flagCategoria;
private:
    Ui::ClienteWindow *ui;

public:
    void mostrar_productos();
public:
    void mostrar_categorias();
public :
    void esconder_categorias();
public :
    void mostrar_tiendas();
public :
    void mostrar_estados_ordenes();
private :
    bool flagTienda = true;
private :
    bool flagEstado = false;

private slots:
    void on_botonCategorias_clicked();
    void on_botonProductos_clicked();

    void on_botonTienda_clicked();
    void on_botonEstadoOrdenes_clicked();
    void on_listWidgetProductos_itemClicked(QListWidgetItem *item);
};
#endif // CLIENTEWINDOW_H
