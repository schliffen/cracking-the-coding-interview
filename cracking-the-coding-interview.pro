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
    BinaryTreePrettyPrint.cpp \
    Utils.cpp \
    1.7.cpp \
    2.2.cpp \
    2.3.cpp \
    2.4.cpp \
    2.5.cpp \
    2.6.cpp \
    9.x.0.cpp \
    9.1.cpp \
    2.7.cpp \
    3.1.cpp \
    3.3.cpp \
    3.4.cpp \
    unittests/testdlinkedlist.cpp \
    unittests/testlinkedlist.cpp \
    unittests/testvector.cpp \
    unittests/teststack.cpp \
    11.1.cpp \
    12.1.cpp \
    13.1.cpp \
    3.5.cpp \
    unittests/testqeueue.cpp \
    unittests/testsorting.cpp \
    3.6.cpp \
    3.7.cpp \
    digraph.cpp \
    4.2.cpp \
    4.3.cpp \
    5.2.cpp

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
    9.1.h \
    2.7.h \
    3.1.h \
    3.3.h \
    Vector.h \
    3.4.h \
    DLinkedList.h \
    unittests/testdlinkedlist.h \
    unittests/testlinkedlist.h \
    unittests/testvector.h \
    unittests/teststack.h \
    11.1.h \
    12.1.h \
    13.1.h \
    3.5.h \
    Queue.h \
    unittests/testqeueue.h \
    bubblesort.h \
    unittests/testsorting.h \
    bubblesort.hpp \
    DLinkedList.hpp \
    LinkedList.hpp \
    Vector.hpp \
    Queue.hpp \
    Stack.hpp \
    3.6.h \
    3.7.h \
    digraph.h \
    4.2.h \
    4.3.h \
    5.2.h

QMAKE_CXXFLAGS = -Wno-write-strings -Wno-unused-parameter
