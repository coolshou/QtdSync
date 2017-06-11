DEFINES += QTD_CLASSES
QT += widgets
QT += xml
QT += network
QT += core

INCLUDEPATH += $$PWD

HEADERS +=  $$PWD/QtdApplication.h \
            $$PWD/QtdCrypt.h \
            $$PWD/QtdMail.h \
            $$PWD/QtdTools.h \
            $$PWD/QtdWidgets.h

SOURCES +=  $$PWD/QtdApplication.cpp \
            $$PWD/QtdCrypt.cpp \
            $$PWD/QtdMail.cpp \
            $$PWD/QtdTools.cpp \
            $$PWD/QtdWidgets.cpp
