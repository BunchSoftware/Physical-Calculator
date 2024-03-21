QT       += core gui printsupport quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++21

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    forms\calculateForm.cpp \
    forms\errorForm.cpp \
    forms\mainWindow.cpp \
    forms\physicalCalculateForm.cpp \
    forms\plottingForm.cpp \
    forms\aboutwindow.cpp \
    forms\familiarization.cpp \
    main.cpp \
    forms\parser.cpp \
    library\qcustomplot.cpp

HEADERS += \
    forms\calculateForm.h \
    forms\errorForm.h \
    forms\MainWindow.h \
    forms\physicalCalculateForm.h \
    forms\plottingForm.h \
    forms\aboutwindow.h \
    forms\familiarization.h \
    library\interpreter.h \
    forms\parser.h \
    library\physicInterpreter.h \
    library\qcustomplot.h

FORMS += \
    forms\calculateForm.ui \
    forms\errorForm.ui \
    forms\mainWindow.ui \
    forms\physicalCalculateForm.ui \
    forms\plottingForm.ui \
    forms\aboutwindow.ui \
    forms\familiarization.ui \
    forms\parser.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    source/qml.qrc \
    source/pictures.qrc \

DISTFILES +=

