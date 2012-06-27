#-------------------------------------------------
#
# Project created by QtCreator 2012-03-17T13:41:07
#
#-------------------------------------------------

QT       += core gui

TARGET = QtBoostQuantLib
TEMPLATE = app


SOURCES += main.cpp\
           qtboostquantlib.cpp

HEADERS  += qtboostquantlib.h

FORMS    += mainwindow.ui


# Boost Library
INCLUDEPATH += C:/boost/boost_1_49_0
DEPENDPATH += C:/boost/boost_1_49_0
#LIBS += -L"C:/boost/boost_1_49_0/stage/x64/lib"

# QuantLib
INCLUDEPATH += C:/QuantLib/QuantLib-1.2
DEPENDPATH += C:/QuantLib/QuantLib-1.2
LIBS += -L"C:/QuantLib/QuantLib-1.2/lib"
