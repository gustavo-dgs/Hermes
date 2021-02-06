#ifndef ADMINWINDOW_DIALOG_H
#define ADMINWINDOW_DIALOG_H

#include <QDialog>

namespace Ui {
class AdminWindow_Dialog;
}

class AdminWindow_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminWindow_Dialog(QWidget *parent = 0);
    ~AdminWindow_Dialog();

private:
    Ui::AdminWindow_Dialog *ui;
};

#endif // ADMINWINDOW_DIALOG_H
