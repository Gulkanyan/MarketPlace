QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += GUI/Admin_Pages

SOURCES += \
    Core/Database/CodeStarter.cpp \
    Core/Database/CoreGlobals.cpp \
    Core/Database/DataBase.cpp \
    Core/Database/Utils/StandardQueries.cpp \
    GUI/Admin_Pages/AdminMainPage.cpp \
    GUI/Admin_Pages/CreateAdmin.cpp \
    GUI/Admin_Pages/CreateUser.cpp \
    GUI/Admin_Pages/Superadmin.cpp \
    main.cpp \
    MainWindow.cpp

HEADERS += \
    Core/Database/CodeStarter.h \
    Core/Database/CoreGlobals.h \
    Core/Database/DataBase.h \
    Core/Database/Utils/StandardQueries.h \
    GUI/Admin_Pages/AdminMainPage.h \
    GUI/Admin_Pages/CreateAdmin.h \
    GUI/Admin_Pages/CreateUser.h \
    GUI/Admin_Pages/Superadmin.h \
    MainWindow.h

FORMS += \
    GUI/Admin_Pages/AdminMainPage.ui \
    GUI/Admin_Pages/CreateAdmin.ui \
    GUI/Admin_Pages/CreateUser.ui \
    GUI/Admin_Pages/Superadmin.ui \
    MainWindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
