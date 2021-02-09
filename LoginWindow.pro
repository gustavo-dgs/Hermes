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
    bakend/Clasebase.cpp \
    bakend/DBOperacion.cpp \
    bakend/Empresa.cpp \
    bakend/Entidad.cpp \
    bakend/Herramientas.cpp \
    bakend/ListaOrdenesCompra.cpp \
    bakend/Orden.cpp \
    bakend/OrdenCompra.cpp \
    bakend/Producto.cpp \
    bakend/PruebaMain.cpp \
    bakend/Usuario.cpp \
        loginwindow.cpp \
    mainwindow_dialog.cpp \
    signup_dialog.cpp \
    signup_customer_dialog.cpp \
    signup_commerce_dialog.cpp \
    signup_shipping_dialog.cpp \
    prueba_dialog.cpp

HEADERS  += loginwindow.h \
    bakend/Clasebase.h \
    bakend/DBOperacion.h \
    bakend/Empresa.h \
    bakend/Entidad.h \
    bakend/Herramientas.h \
    bakend/ListaOrdenesCompra.h \
    bakend/Orden.h \
    bakend/OrdenCompra.h \
    bakend/Producto.h \
    bakend/ProductoCantidad.h \
    bakend/Usuario.h \
    mainwindow_dialog.h \
    signup_dialog.h \
    signup_customer_dialog.h \
    signup_commerce_dialog.h \
    signup_shipping_dialog.h \
    prueba_dialog.h

FORMS    += loginwindow.ui \
    mainwindow_dialog.ui \
    signup_dialog.ui \
    signup_customer_dialog.ui \
    signup_commerce_dialog.ui \
    signup_shipping_dialog.ui \
    prueba_dialog.ui

unix:!macx: LIBS += -L$$PWD/lib/ -lmysqlcppconn

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

DISTFILES += \
    bakend/out
