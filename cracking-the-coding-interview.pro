TEMPLATE = app
TARGET = test
CONFIG += debug
QT += core
SOURCES += \
    main.cpp \
    utils/BinaryTreePrettyPrint.cpp \
    utils/Utils.cpp \
    unittests/testdlinkedlist.cpp \
    unittests/testlinkedlist.cpp \
    unittests/testvector.cpp \
    unittests/teststack.cpp \
    unittests/testqeueue.cpp \
    unittests/testsorting.cpp \
    datastructures/digraph.cpp \
    solutions/11.1.cpp \
    solutions/12.1.cpp \
    solutions/13.1.cpp \
    solutions/2.1.cpp \
    solutions/2.2.cpp \
    solutions/2.3.cpp \
    solutions/2.4.cpp \
    solutions/2.5.cpp \
    solutions/2.6.cpp \
    solutions/2.7.cpp \
    solutions/3.1.cpp \
    solutions/3.3.cpp \
    solutions/3.4.cpp \
    solutions/3.5.cpp \
    solutions/3.6.cpp \
    solutions/3.7.cpp \
    solutions/4.1.cpp \
    solutions/4.2.cpp \
    solutions/4.3.cpp \
    solutions/5.1.cpp \
    solutions/5.2.cpp \
    solutions/9.1.cpp \
    solutions/9.x.0.cpp \
    solutions/4.4.cpp \
    solutions/4.5.cpp \
    solutions/12.x.0.cpp \
    solutions/4.6.cpp \
    unittests/testbinarytree.cpp \
    utils/SampleBinaryTrees.cpp \
    solutions/4.7.cpp \
    solutions/4.8.cpp \
    BinaryTreeRenderer.cpp \
    unittests/testbinarytreerenderer.cpp \
    solutions/4.9.cpp \
    solutions/dataStructures/arraysAndStrings/1.1.cpp \
    solutions/dataStructures/arraysAndStrings/1.2.cpp \
    solutions/dataStructures/arraysAndStrings/1.3.cpp \
    solutions/dataStructures/arraysAndStrings/1.4.cpp \
    solutions/dataStructures/arraysAndStrings/1.5.cpp \
    solutions/dataStructures/arraysAndStrings/1.6.cpp \
    solutions/dataStructures/arraysAndStrings/1.7.cpp \
    solutions/dataStructures/arraysAndStrings/1.8.cpp


HEADERS += \
    utils/Utils.h \
    datastructures/LinkedList.h \
    datastructures/Stack.h \
    datastructures/Vector.h \
    datastructures/DLinkedList.h \
    datastructures/Queue.h \
    datastructures/DLinkedList.hpp \
    datastructures/LinkedList.hpp \
    datastructures/Vector.hpp \
    datastructures/Queue.hpp \
    datastructures/digraph.h \
    datastructures/Stack.hpp \
    algorithms/bubblesort.h \
    algorithms/bubblesort.hpp \
    unittests/testdlinkedlist.h \
    unittests/testlinkedlist.h \
    unittests/testqeueue.h \
    unittests/testsorting.h \
    unittests/testvector.h \
    unittests/teststack.h \
    utils/BinaryTreePrettyPrint.h \
    solutions/11.1.h \
    solutions/12.1.h \
    solutions/13.1.h \
    solutions/2.1.h \
    solutions/2.2.h \
    solutions/2.3.h \
    solutions/2.4.h \
    solutions/2.5.h \
    solutions/2.6.h \
    solutions/2.7.h \
    solutions/3.1.h \
    solutions/3.3.h \
    solutions/3.4.h \
    solutions/3.5.h \
    solutions/3.6.h \
    solutions/3.7.h \
    solutions/4.1.h \
    solutions/4.2.h \
    solutions/4.3.h \
    solutions/5.1.h \
    solutions/5.2.h \
    solutions/9.1.h \
    solutions/9.x.0.h \
    datastructures/BinaryTree.h \
    solutions/4.4.h \
    solutions/4.5.h \
    solutions/12.x.0.h \
    solutions/4.6.h \
    unittests/testbinarytree.h \
    utils/SampleBinaryTrees.h \
    datastructures/BinaryTree.hpp \
    solutions/4.7.h \
    solutions/4.8.h \
    BinaryTreeRenderer.h \
    unittests/testbinarytreerenderer.h \
    solutions/4.9.h \
    solutions/dataStructures/arraysAndStrings/1.1.h \
    solutions/dataStructures/arraysAndStrings/1.2.h \
    solutions/dataStructures/arraysAndStrings/1.3.h \
    solutions/dataStructures/arraysAndStrings/1.4.h \
    solutions/dataStructures/arraysAndStrings/1.5.h \
    solutions/dataStructures/arraysAndStrings/1.6.h \
    solutions/dataStructures/arraysAndStrings/1.7.h \
    solutions/dataStructures/arraysAndStrings/1.8.h


QMAKE_CXXFLAGS = -Wno-write-strings -Wno-unused-parameter

OTHER_FILES += \
    interviewQuestions.txt
