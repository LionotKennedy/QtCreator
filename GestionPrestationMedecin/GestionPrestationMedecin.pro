#-------------------------------------------------
#
# Project created by QtCreator 2022-12-08T17:47:44
#
#-------------------------------------------------

QT       += core gui printsupport
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GestionPrestationMedecin
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

QT += widgets


SOURCES += \
        main.cpp \
        gestionprestation.cpp \
    acceuil.cpp \
    style.cpp \
    histogramm.cpp \
    qcustomplot.cpp \
    totalmed.cpp \
    totalpat.cpp \
    totaltrait.cpp \
    medupdate.cpp \
    medadd.cpp \
    patupdate.cpp \
    patadd.cpp \
    addtrait.cpp

HEADERS += \
        gestionprestation.h \
    acceuil.h \
    connexiondatabase.h \
    style.h \
    histogramm.h \
    qcustomplot.h \
    totalpat.h \
    totaltrait.h \
    totalmed.h \
    medupdate.h \
    medadd.h \
    patupdate.h \
    patadd.h \
    addtrait.h

FORMS += \
        gestionprestation.ui \
    acceuil.ui \
    histogramm.ui \
    totalmed.ui \
    totalpat.ui \
    totaltrait.ui \
    medupdate.ui \
    medadd.ui \
    patupdate.ui \
    patadd.ui \
    addtrait.ui
