#-------------------------------------------------
#
# Project created by QtCreator 2016-11-13T14:35:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Dictionary
TEMPLATE = app


SOURCES += main.cpp\
        mainmenu.cpp \
    existinglanguage.cpp \
    customdialog.cpp

HEADERS  += mainmenu.h \
    existinglanguage.h \
    customdialog.h

FORMS    += mainmenu.ui \
    existinglanguage.ui
