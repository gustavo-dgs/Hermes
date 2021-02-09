#-------------------------------------------------
#
# Project created by QtCreator 2021-01-30T23:24:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Hermes_GUI
TEMPLATE = app


SOURCES += main.cpp\
        loginwindow.cpp \
    signin_dialog.cpp \
    signin_customer_dialog.cpp \
    signin_commerce_dialog.cpp \
    maincustomerwindow_dialog.cpp \
    registroproductos_window.cpp \
    productowindow.cpp \
    listaproductoswindow.cpp \
    carritowindow.cpp \
    clientewindow.cpp \
    mensajewindow.cpp \
    mainshippingwindow_dialog.cpp

HEADERS  += loginwindow.h \
    signin_dialog.h \
    signin_customer_dialog.h \
    signin_commerce_dialog.h \
    maincustomerwindow_dialog.h \
    registroproductos_window.h \
    productowindow.h \
    listaproductoswindow.h \
    carritowindow.h \
    clientewindow.h \
    mensajewindow.h \
    mainshippingwindow_dialog.h

FORMS    += loginwindow.ui \
    signin_dialog.ui \
    signin_customer_dialog.ui \
    signin_commerce_dialog.ui \
    maincustomerwindow_dialog.ui \
    registroproductos_window.ui \
    productowindow.ui \
    listaproductoswindow.ui \
    carritowindow.ui \
    clientewindow.ui \
    mensajewindow.ui \
    mainshippingwindow_dialog.ui

RESOURCES += \
    hermes_imagenes.qrc
