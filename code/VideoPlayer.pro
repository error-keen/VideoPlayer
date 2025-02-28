QT       += core gui
QT	+= multimedia      #使用多媒体模块
QT += multimediawidgets #使用QVideoWidget视频显示组件
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 #c++17在使用emit时会出错

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    playerslider.cpp \
    videoplayer.cpp

HEADERS += \
    playerslider.h \
    videoplayer.h

FORMS += \
    videoplayer.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
