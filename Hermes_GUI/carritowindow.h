#ifndef CARRITOWINDOW_H
#define CARRITOWINDOW_H

#include <QDialog>

namespace Ui {
class CarritoWindow;
}

class CarritoWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CarritoWindow(QWidget *parent = 0);
    ~CarritoWindow();

private:
    Ui::CarritoWindow *ui;
};

#endif // CARRITOWINDOW_H
