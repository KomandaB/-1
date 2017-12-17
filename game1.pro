#-------------------------------------------------
#
# Project created by QtCreator 2017-11-08T16:15:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = game1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    goodcharacter.cpp \
    badcharacter.cpp \
    station.cpp \
    gamehandler.cpp \
    character.cpp \
    gameentites.cpp \
    main.cpp \
    mainwindow.cpp \
    player.cpp \
    dialogwindow.cpp \
    mainmenu.cpp \
    settings.cpp \
    stationwindow.cpp \
    wingame.cpp \
    faitwindow.cpp \
    armor.cpp \
    agilitycharacters.cpp \
    passivecharacters.cpp \
    player_level.cpp \
    strengthcharacters.cpp \
    weapons.cpp \
    equipment.cpp \
    nonplayercharacter.cpp \
    goods.cpp \
    item.cpp \
    backpack.cpp

HEADERS += \
    goodcharacter.h \
    badcharacter.h \
    character.h \
    dialogwindow.h \
    gameentites.h \
    gamehandler.h \
    mainmenu.h \
    mainwindow.h \
    player.h \
    settings.h \
    station.h \
    stationwindow.h \
    wingame.h \
    faitwindow.h \
    armor.h \
    agilitycharacters.h \
    passivecharacters.h \
    player_level.h \
    strengthcharacters.h \
    weapons.h \
    equipment.h \
    nonplayercharacter.h \
    goods.h \
    item.h \
    backpack.h


FORMS += \
    dialogwindow.ui \
    gamemap.ui \
    mainmenu.ui \
    mainwindow.ui \
    wingame.ui \
    faitwindow.ui \
    backpack.ui

SUBDIRS += \
    game1.pro

DISTFILES += \
    metro.jpg\
    start_background.png \
    start.png


RESOURCES += \
    images.qrc
