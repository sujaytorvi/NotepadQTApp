QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialogbox.cpp \
    main.cpp \
    mynotepadapp.cpp

HEADERS += \
    dialogbox.h \
    mynotepadapp.h

FORMS += \
    dialogbox.ui \
    mynotepadapp.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc

DISTFILES += \
    ImageResource/0001.jpg \
    ImageResource/bold-1.png \
    ImageResource/bold.png \
    ImageResource/italic-1.png \
    ImageResource/italic-11.png \
    ImageResource/subscript.png \
    ImageResource/subscripttrigger.png \
    ImageResource/superscript.png \
    ImageResource/superscripttrigger.png \
    ImageResource/u-1.png \
    ImageResource/u-11.png
