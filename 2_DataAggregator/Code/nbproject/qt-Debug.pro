# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux-x86
TARGET = Code
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets sql xml
SOURCES += src/AddDeviceGui.cpp src/AddUserGui.cpp src/CenterGui.cpp src/Coder.cpp src/Device.cpp src/DeviceAbstractGui.cpp src/DevicesGui.cpp src/HelpGui.cpp src/HistoryGui.cpp src/JsonParser.cpp src/LocalDBMaster.cpp src/LoginGui.cpp src/MasterGui.cpp src/Menu.cpp src/ModifyDeviceGui.cpp src/ModifyUserGui.cpp src/OpeningGui.cpp src/ResultsGui.cpp src/SplashGui.cpp src/User.cpp src/UserAbstractGui.cpp src/UsersGui.cpp src/VideoGui.cpp src/ViewUserGui.cpp src/main.cpp
HEADERS += src/AddDeviceGui.h src/AddUserGui.h src/AppStyles.h src/AppStyles.tcc src/CenterGui.h src/Coder.h src/Device.h src/DeviceAbstractGui.h src/DevicesGui.h src/HelpGui.h src/HistoryGui.h src/JsonParser.h src/LocalDBMaster.h src/LoginGui.h src/MasterGui.h src/Menu.h src/ModifyDeviceGui.h src/ModifyUserGui.h src/OpeningGui.h src/ResultsGui.h src/SplashGui.h src/User.h src/UserAbstractGui.h src/UsersGui.h src/VideoGui.h src/ViewUserGui.h
FORMS +=
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux-x86
MOC_DIR = moc
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += -lqjson -lsqlite3  
