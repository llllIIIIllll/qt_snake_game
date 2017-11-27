TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

INCLUDEPATH += /usr/local/include/opencv2 \
               /usr/local/include

LIBS += /usr/local/lib/opencv2/libopencv*
