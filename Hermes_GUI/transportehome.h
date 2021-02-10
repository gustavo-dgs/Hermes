#ifndef TRANSPORTEHOME_H
#define TRANSPORTEHOME_H

#include <QDialog>
#include <QListWidgetItem>
namespace Ui {
class TransporteHome;
}

class TransporteHome : public QDialog
{
    Q_OBJECT

public:
    explicit TransporteHome(QWidget *parent = 0);
    ~TransporteHome();

private slots:
    void on_listWidgetOrdenes_itemClicked(QListWidgetItem *item);

private:
    Ui::TransporteHome *ui;
};

#endif // TRANSPORTEHOME_H
