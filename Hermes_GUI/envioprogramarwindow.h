#ifndef ENVIOPROGRAMARWINDOW_H
#define ENVIOPROGRAMARWINDOW_H

#include <QDialog>

namespace Ui {
class EnvioProgramarWindow;
}

class EnvioProgramarWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EnvioProgramarWindow(QWidget *parent = 0);
    ~EnvioProgramarWindow();

private:
    Ui::EnvioProgramarWindow *ui;
};

#endif // ENVIOPROGRAMARWINDOW_H
