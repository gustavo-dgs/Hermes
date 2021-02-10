#ifndef EDICIONPRODUCTOWINDOW_H
#define EDICIONPRODUCTOWINDOW_H

#include <QDialog>

namespace Ui {
class EdicionProductoWindow;
}

class EdicionProductoWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EdicionProductoWindow(QWidget *parent = 0);
    ~EdicionProductoWindow();

private:
    Ui::EdicionProductoWindow *ui;
};

#endif // EDICIONPRODUCTOWINDOW_H
