QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Core/DataManager.cpp \
    Core/LogsManager.cpp \
    Core/Utils/WriterXML.cpp \
    Core/main.cpp \
    UI/MainUI.cpp \
    UI/TableManager.cpp \

HEADERS += \
    Core/DataManager.h \
    Core/LogsManager.h \
    Core/Utils/WriterXML.h \
    UI/MainUI.h


FORMS += \
    UI/MainUI.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Core/DATABASE/kurs4sem1.xml
