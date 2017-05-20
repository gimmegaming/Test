#-------------------------------------------------
#
# Project created by QtCreator 2017-05-14T16:08:29
#
#-------------------------------------------------

QT       += core gui
win32: RC_ICONS += Gimmegaming.ico

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Gimmegaming_001
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    createmenus.cpp \
    openFile.cpp \
    helpaboutus.cpp \
    helptech.cpp \
    helpcontact.cpp \
    toolsoptions.cpp

HEADERS  += mainwindow.h \
    createmenus.h \
    openfile.h \
    helpaboutus.h \
    helptech.h \
    helpcontact.h \
    toolsoptions.h

FORMS    += mainwindow.ui

RESOURCES += \
    resource.qrc
