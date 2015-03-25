TEMPLATE = app
TARGET = test
CONFIG += debug
QT += core
SOURCES += \
    main.cpp \
    1.8.cpp \
    5.1.cpp \
    1.5.cpp \
    1.4.cpp \
    1.3.cpp \
    1.2.cpp \
    1.1.cpp \
    1.6.cpp \
    2.1.cpp \
    4.1.cpp \
    LinkedList.cpp \
    Stack.cpp \
    Binarytree.cpp \
    BinaryTreePrettyPrint.cpp \
    Utils.cpp \
    1.7.cpp \
    2.2.cpp \
    2.3.cpp \
    2.4.cpp \
    2.5.cpp \
    2.6.cpp \
    9.x.0.cpp \
    9.1.cpp

HEADERS += \
    1.8.h \
    5.1.h \
    1.5.h \
    1.1.h \
    1.2.h \
    1.3.h \
    1.4.h \
    1.6.h \
    2.1.h \
    4.1.h \
    LinkedList.h \
    Stack.h \
    Binarytree.h \
    BinaryTreePrettyPrint.h \
    Utils.h \
    1.7.h \
    2.2.h \
    2.3.h \
    2.4.h \
    2.5.h \
    2.6.h \
    9.x.0.h \
    9.1.h

QMAKE_CXXFLAGS = -Wno-write-strings -Wno-unused-parameter
