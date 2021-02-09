#ifndef MENSAJEWINDOW_H
#define MENSAJEWINDOW_H

#include <QDialog>

namespace Ui {
class MensajeWindow;
}

class MensajeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MensajeWindow(QWidget *parent = 0);
    ~MensajeWindow();

private:
    Ui::MensajeWindow *ui;
};

#endif // MENSAJEWINDOW_H
