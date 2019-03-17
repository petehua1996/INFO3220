QT += core
QT -= gui

CONFIG += c++11

TARGET = Factory
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    bicycle.cpp \
    bus.cpp \
    car.cpp \
    vehiclefactory.cpp

HEADERS += \
    bicycle.h \
    bus.h \
    car.h \
    motorvehicle.h \
    vehicle.h \
    vehiclefactory.h
