######################################################################
# Automatically generated by qmake (3.1) Tue Jul 10 12:20:03 2018
######################################################################

TEMPLATE = app
TARGET = GT_Tool_PAGE_Points
INCLUDEPATH += .

# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
QT+=opengl
HEADERS += aboutwindow.h \
           document.h \
           glviewport.h \
           helpwindow.h \
           mainwindow.h \
           settingswindow.h
SOURCES += aboutwindow.cpp \
           document.cpp \
           glviewport.cpp \
           helpwindow.cpp \
           main.cpp \
           mainwindow.cpp \
           settingswindow.cpp