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
    customdialog.cpp \
    Language.cpp \
    Dictionary.cpp \
    choosesounds.cpp \
    choosestructure.cpp \
    SoundHelper.cpp \
    WordGenerator.cpp \
    signalslots.cpp \
    choosewords.cpp

HEADERS  += mainmenu.h \
    existinglanguage.h \
    customdialog.h \
    Language.h \
    Dictionary.h \
    choosesounds.h \
    choosestructure.h \
    signalslots.h \
    choosewords.h

FORMS    += mainmenu.ui \
    existinglanguage.ui \
    choosesounds.ui \
    choosestructure.ui \
    choosewords.ui
