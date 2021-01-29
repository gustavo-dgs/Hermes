#-------------------------------------------------
#
# Project created by QtCreator 2021-01-23T12:44:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LoginWindow
TEMPLATE = app


SOURCES += main.cpp\
    bakend/DBOperacion.cpp \
        loginwindow.cpp \
    mainwindow_dialog.cpp \
    signup_dialog.cpp \
    signup_customer_dialog.cpp \
    signup_commerce_dialog.cpp \
    signup_shipping_dialog.cpp

HEADERS  += loginwindow.h \
    bakend/DBOperacion.h \
    mainwindow_dialog.h \
    signup_dialog.h \
    signup_customer_dialog.h \
    signup_commerce_dialog.h \
    signup_shipping_dialog.h

FORMS    += loginwindow.ui \
    mainwindow_dialog.ui \
    signup_dialog.ui \
    signup_customer_dialog.ui \
    signup_commerce_dialog.ui \
    signup_shipping_dialog.ui
