#ifndef MAINWINDOW_DIALOG_H
#define MAINWINDOW_DIALOG_H

#include <QDialog>

namespace Ui {
class MainWindow_Dialog;
}

class MainWindow_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit MainWindow_Dialog(QWidget *parent = 0);
    ~MainWindow_Dialog();

private:
    Ui::MainWindow_Dialog *ui;
};

#endif // MAINWINDOW_DIALOG_H
