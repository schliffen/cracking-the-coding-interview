TEMPLATE = app
TARGET = cracking_the_coding_interview
CONFIG += debug
QT += core
SOURCES += \
    main.cpp \
    lib/utils/Utils.cpp \
    unittests/testdlinkedlist.cpp \
    unittests/testlinkedlist.cpp \
    unittests/testvector.cpp \
    unittests/teststack.cpp \
    unittests/testqeueue.cpp \
    unittests/testsorting.cpp \
    lib/datastructures/digraph.cpp \
    unittests/testbinarytree.cpp \
    lib/utils/SampleBinaryTrees.cpp \
    unittests/testbinarytreerenderer.cpp \
    lib/utils/BinaryTreeRenderer.cpp \
    unittests/teststring.cpp \
    lib/datastructures/string.cpp \
    1.1-arraysAndStrings.cxx\
    1.2-arraysAndStrings.cxx\
    1.3-arraysAndStrings.cxx\
    1.4-arraysAndStrings.cxx\
    1.5-arraysAndStrings.cxx\
    1.6-arraysAndStrings.cxx\
    1.7-arraysAndStrings.cxx\
    1.8-arraysAndStrings.cxx\
    11.1-sortingAndSearching.cxx\
    11.4-sortingAndSearching.cxx\
    12.1-testing.cxx\
    12.x.0-testing.cxx\
    13.1-cAndCpp.cxx\
    2.1-linkedLists.cxx\
    2.2-linkedLists.cxx\
    2.3-linkedLists.cxx\
    2.4-linkedLists.cxx\
    2.5-linkedLists.cxx\
    2.6-linkedLists.cxx\
    2.7-linkedLists.cxx\
    3.1-stacksAndQueues.cxx\
    3.3-stacksAndQueues.cxx\
    3.4-stacksAndQueues.cxx\
    3.5-stacksAndQueues.cxx\
    3.6-stacksAndQueues.cxx\
    3.7-stacksAndQueues.cxx\
    4.1-treesAndGraphs.cxx\
    4.2-treesAndGraphs.cxx\
    4.3-treesAndGraphs.cxx\
    4.4-treesAndGraphs.cxx\
    4.5-treesAndGraphs.cxx\
    4.6-treesAndGraphs.cxx\
    4.7-treesAndGraphs.cxx\
    4.8-treesAndGraphs.cxx\
    4.9-treesAndGraphs.cxx\
    5.1-bitManipulation.cxx\
    5.2-bitManipulation.cxx\
    5.3-bitManipulation.cxx\
    5.7-bitManipulation.cxx\
    9.1-recursionAndDynamicProgramming.cxx\
    9.x.0-recursionAndDynamicProgramming.cxx



HEADERS += \
    lib/utils/Utils.h \
    lib/datastructures/LinkedList.h \
    lib/datastructures/Stack.h \
    lib/datastructures/DLinkedList.h \
    lib/datastructures/Queue.h \
    lib/datastructures/DLinkedList.hpp \
    lib/datastructures/LinkedList.hpp \
    lib/datastructures/Queue.hpp \
    lib/datastructures/digraph.h \
    lib/datastructures/Stack.hpp \
    lib/algorithms/bubblesort.h \
    lib/algorithms/bubblesort.hpp \
    lib/datastructures/BinaryTree.h \
    lib/utils/BinaryTreeRenderer.h \
    lib/utils/SampleBinaryTrees.h \
    lib/datastructures/BinaryTree.hpp \
    unittests/testbinarytreerenderer.h \
    assert.h \
    lib/datastructures/string.h \
    lib/datastructures/vector.h \
    lib/datastructures/vector.hpp \
    unittests/teststring.h \
    unittests/testbinarytree.h \
    unittests/testdlinkedlist.h \
    unittests/testlinkedlist.h \
    unittests/testqeueue.h \
    unittests/testsorting.h \
    unittests/testvector.h \
    unittests/teststack.h \
    unittests/testhelper.h


QMAKE_CXXFLAGS = -Wno-write-strings -Wno-unused-parameter

OTHER_FILES += \
    interviewQuestions.txt

DISTFILES += \
    valgrindReport.txt \
    unittests/makefile \
    bin/style
