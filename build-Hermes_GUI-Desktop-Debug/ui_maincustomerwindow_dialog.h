/********************************************************************************
** Form generated from reading UI file 'maincustomerwindow_dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCUSTOMERWINDOW_DIALOG_H
#define UI_MAINCUSTOMERWINDOW_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_MainCustomerWindow_Dialog
{
public:

    void setupUi(QDialog *MainCustomerWindow_Dialog)
    {
        if (MainCustomerWindow_Dialog->objectName().isEmpty())
            MainCustomerWindow_Dialog->setObjectName(QString::fromUtf8("MainCustomerWindow_Dialog"));
        MainCustomerWindow_Dialog->resize(640, 480);

        retranslateUi(MainCustomerWindow_Dialog);

        QMetaObject::connectSlotsByName(MainCustomerWindow_Dialog);
    } // setupUi

    void retranslateUi(QDialog *MainCustomerWindow_Dialog)
    {
        MainCustomerWindow_Dialog->setWindowTitle(QApplication::translate("MainCustomerWindow_Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainCustomerWindow_Dialog: public Ui_MainCustomerWindow_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCUSTOMERWINDOW_DIALOG_H
