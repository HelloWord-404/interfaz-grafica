QT       += core gui
QT += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    appstore.cpp \
    audio.cpp \
    calculadora.cpp \
    dias.cpp \
    house.cpp \
    juegos.cpp \
    main.cpp \
    mainwindow.cpp \
    reconocimiento.cpp \
    whatsapp.cpp \
    word.cpp

HEADERS += \
    appstore.h \
    audio.h \
    calculadora.h \
    dias.h \
    house.h \
    juegos.h \
    mainwindow.h \
    whatsapp.h \
    word.h

FORMS += \
    appstore.ui \
    audio.ui \
    calculadora.ui \
    dias.ui \
    house.ui \
    juegos.ui \
    mainwindow.ui \
    whatsapp.ui \
    word.ui
#QMAKE_CXXFLAGS+= std=gnu++23
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    imagenes.qrc

DISTFILES += \
    ia.py
