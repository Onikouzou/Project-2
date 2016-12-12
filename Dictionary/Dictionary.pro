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
<<<<<<< HEAD
    choosestructure.cpp
=======
    SoundHelper.cpp \
    WordGenerator.cpp
>>>>>>> origin/master

HEADERS  += mainmenu.h \
    existinglanguage.h \
    customdialog.h \
    Language.h \
    Dictionary.h \
    choosesounds.h \
    choosestructure.h

FORMS    += mainmenu.ui \
    existinglanguage.ui \
    choosesounds.ui \
    choosestructure.ui
