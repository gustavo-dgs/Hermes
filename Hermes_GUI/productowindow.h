#ifndef PRODUCTOWINDOW_H
#define PRODUCTOWINDOW_H

#include <QDialog>

namespace Ui {
class ProductoWindow;
}

class ProductoWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ProductoWindow(QWidget *parent = 0);
    ~ProductoWindow();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::ProductoWindow *ui;
};

#endif // PRODUCTOWINDOW_H
