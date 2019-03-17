QT += core
QT -= gui

CONFIG += c++11

TARGET = ConstCorrectness
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    date.cpp \
    student.cpp

HEADERS += \
    person.h \
    date.h \
    student.h
