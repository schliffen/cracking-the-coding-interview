TEMPLATE = app
TARGET = test
CONFIG += debug
QT += core
SOURCES += \
    main.cpp \
    4th-edition/isRotation.cpp \
    4th-edition/zeroRowColumns.cpp \
    5.1.cpp \
    3.2.cpp \
    LinkedList.cpp \
    Stack.cpp \
    1.5.cpp \
    1.4.cpp \
    1.3.cpp \
    1.2.cpp \
    1.1.cpp \
    1.6.cpp \
    2.1.cpp \
    4.1.cpp \
    Binarytree.cpp \
    BinaryTreePrettyPrint.cpp \
    Utils.cpp

HEADERS += \
    4th-edition/isRotation.h \
    4th-edition/zeroRowColumns.h \
    5.1.h \
    3.2.h \
    LinkedList.h \
    Stack.h \
    1.5.h \
    1.1.h \
    1.2.h \
    1.3.h \
    1.4.h \
    1.6.h \
    2.1.h \
    4.1.h \
    Binarytree.h \
    BinaryTreePrettyPrint.h \
    Utils.h

QMAKE_CXXFLAGS = -Wno-write-strings -Wno-unused-parameter
