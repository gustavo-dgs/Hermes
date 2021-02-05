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
    signin_shipping_dialog.cpp \
    signin_commerce_dialog.cpp \
    maincustomerwindow_dialog.cpp \
    maincommercewindow_dialog.cpp

HEADERS  += loginwindow.h \
    signin_dialog.h \
    signin_customer_dialog.h \
    signin_shipping_dialog.h \
    signin_commerce_dialog.h \
    maincustomerwindow_dialog.h \
    maincommercewindow_dialog.h

FORMS    += loginwindow.ui \
    signin_dialog.ui \
    signin_customer_dialog.ui \
    signin_shipping_dialog.ui \
    signin_commerce_dialog.ui \
    maincustomerwindow_dialog.ui \
    maincommercewindow_dialog.ui
