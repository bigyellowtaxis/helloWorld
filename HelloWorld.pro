TEMPLATE = app
TARGET = HelloWorld

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    indow.cpp

HEADERS += \
    indow.h
