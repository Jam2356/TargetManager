QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Core/AllObjects.cpp \
    Core/Core.cpp \
    Core/DataManager.cpp \
    Core/LogsManager.cpp \
    Core/Utils/ObjectDataTypes.cpp \
    Core/Utils/ReaderXML.cpp \
    Core/Utils/SoloObject.cpp \
    Core/Utils/WriterXML.cpp \
    Core/main.cpp \
    UI/MainUI.cpp \
    UI/TableManager.cpp \
    UI/UIController.cpp

HEADERS += \
    Core/AllObjects.h \
    Core/Core.h \
    Core/DataManager.h \
    Core/LogsManager.h \
    Core/Utils/EnumNumberType.h \
    Core/Utils/ObjectDataTypes.h \
    Core/Utils/ReaderXML.h \
    Core/Utils/SoloObject.h \
    Core/Utils/WriterXML.h \
    UI/MainUI.h \
    UI/UIController.h


FORMS += \
    UI/MainUI.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Core/DATABASE/kurs4sem1.xml
