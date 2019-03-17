QT += core
QT -= gui

CONFIG += c++11

TARGET = AbstractFactory
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    abstractfactory.h \
    ide.h \
    malware.h
