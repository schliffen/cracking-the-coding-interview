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
    solutions/dataStructures/arraysAndStrings/1.1.cpp \
    solutions/dataStructures/arraysAndStrings/1.2.cpp \
    solutions/dataStructures/arraysAndStrings/1.3.cpp \
    solutions/dataStructures/arraysAndStrings/1.4.cpp \
    solutions/dataStructures/arraysAndStrings/1.5.cpp \
    solutions/dataStructures/arraysAndStrings/1.6.cpp \
    solutions/dataStructures/arraysAndStrings/1.7.cpp \
    solutions/dataStructures/arraysAndStrings/1.8.cpp \
    solutions/dataStructures/linkedLists/2.1.cpp \
    solutions/dataStructures/linkedLists/2.2.cpp \
    solutions/dataStructures/linkedLists/2.3.cpp \
    solutions/dataStructures/linkedLists/2.4.cpp \
    solutions/dataStructures/linkedLists/2.5.cpp \
    solutions/dataStructures/linkedLists/2.6.cpp \
    solutions/dataStructures/linkedLists/2.7.cpp \
    solutions/conceptsAndAlgorithms/testing/12.1.cpp \
    solutions/conceptsAndAlgorithms/testing/12.x.0.cpp \
    solutions/knowledgeBased/cAndCpp/13.1.cpp \
    solutions/dataStructures/stacksAndQueues/3.1.cpp \
    solutions/dataStructures/stacksAndQueues/3.3.cpp \
    solutions/dataStructures/stacksAndQueues/3.4.cpp \
    solutions/dataStructures/stacksAndQueues/3.5.cpp \
    solutions/dataStructures/stacksAndQueues/3.6.cpp \
    solutions/dataStructures/stacksAndQueues/3.7.cpp \
    solutions/dataStructures/treesAndGraphs/4.1.cpp \
    solutions/dataStructures/treesAndGraphs/4.2.cpp \
    solutions/dataStructures/treesAndGraphs/4.3.cpp \
    solutions/dataStructures/treesAndGraphs/4.4.cpp \
    solutions/dataStructures/treesAndGraphs/4.5.cpp \
    solutions/dataStructures/treesAndGraphs/4.6.cpp \
    solutions/dataStructures/treesAndGraphs/4.7.cpp \
    solutions/dataStructures/treesAndGraphs/4.8.cpp \
    solutions/dataStructures/treesAndGraphs/4.9.cpp \
    solutions/conceptsAndAlgorithms/bitManipulation/5.1.cpp \
    solutions/conceptsAndAlgorithms/recursionAndDynamicProgramming/9.1.cpp \
    solutions/conceptsAndAlgorithms/recursionAndDynamicProgramming/9.x.0.cpp \
    lib/utils/BinaryTreeRenderer.cpp \
    solutions/conceptsAndAlgorithms/sortingAndSearching/11.1.cpp \
    unittests/teststring.cpp \
    lib/datastructures/string.cpp \
    solutions/conceptsAndAlgorithms/bitManipulation/5.2.cpp \
    solutions/conceptsAndAlgorithms/bitManipulation/5.3.cpp \
    solutions/conceptsAndAlgorithms/bitManipulation/5.7.cpp


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
    unittests/testdlinkedlist.h \
    unittests/testlinkedlist.h \
    unittests/testqeueue.h \
    unittests/testsorting.h \
    unittests/testvector.h \
    unittests/teststack.h \
    lib/datastructures/BinaryTree.h \
    unittests/testbinarytree.h \
    lib/utils/SampleBinaryTrees.h \
    lib/datastructures/BinaryTree.hpp \
    unittests/testbinarytreerenderer.h \
    solutions/dataStructures/arraysAndStrings/1.1.h \
    solutions/dataStructures/arraysAndStrings/1.2.h \
    solutions/dataStructures/arraysAndStrings/1.3.h \
    solutions/dataStructures/arraysAndStrings/1.4.h \
    solutions/dataStructures/arraysAndStrings/1.5.h \
    solutions/dataStructures/arraysAndStrings/1.6.h \
    solutions/dataStructures/arraysAndStrings/1.7.h \
    solutions/dataStructures/arraysAndStrings/1.8.h \
    solutions/dataStructures/linkedLists/2.1.h \
    solutions/dataStructures/linkedLists/2.2.h \
    solutions/dataStructures/linkedLists/2.3.h \
    solutions/dataStructures/linkedLists/2.4.h \
    solutions/dataStructures/linkedLists/2.5.h \
    solutions/dataStructures/linkedLists/2.6.h \
    solutions/dataStructures/linkedLists/2.7.h \
    solutions/conceptsAndAlgorithms/testing/12.1.h \
    solutions/conceptsAndAlgorithms/testing/12.x.0.h \
    solutions/knowledgeBased/cAndCpp/13.1.h \
    solutions/dataStructures/stacksAndQueues/3.1.h \
    solutions/dataStructures/stacksAndQueues/3.3.h \
    solutions/dataStructures/stacksAndQueues/3.4.h \
    solutions/dataStructures/stacksAndQueues/3.5.h \
    solutions/dataStructures/stacksAndQueues/3.6.h \
    solutions/dataStructures/stacksAndQueues/3.7.h \
    solutions/dataStructures/treesAndGraphs/4.1.h \
    solutions/dataStructures/treesAndGraphs/4.2.h \
    solutions/dataStructures/treesAndGraphs/4.3.h \
    solutions/dataStructures/treesAndGraphs/4.4.h \
    solutions/dataStructures/treesAndGraphs/4.5.h \
    solutions/dataStructures/treesAndGraphs/4.6.h \
    solutions/dataStructures/treesAndGraphs/4.7.h \
    solutions/dataStructures/treesAndGraphs/4.8.h \
    solutions/dataStructures/treesAndGraphs/4.9.h \
    solutions/conceptsAndAlgorithms/bitManipulation/5.1.h \
    solutions/conceptsAndAlgorithms/bitManipulation/5.2.h \
    solutions/conceptsAndAlgorithms/recursionAndDynamicProgramming/9.1.h \
    solutions/conceptsAndAlgorithms/recursionAndDynamicProgramming/9.x.0.h \
    lib/utils/BinaryTreeRenderer.h \
    solutions/conceptsAndAlgorithms/sortingAndSearching/11.1.h \
    assert.h \
    lib/datastructures/string.h \
    unittests/teststring.h \
    lib/datastructures/vector.h \
    lib/datastructures/vector.hpp \
    unittests/testhelper.h \
    solutions/conceptsAndAlgorithms/bitManipulation/5.3.h \
    solutions/conceptsAndAlgorithms/bitManipulation/5.7.h


QMAKE_CXXFLAGS = -Wno-write-strings -Wno-unused-parameter

OTHER_FILES += \
    interviewQuestions.txt

DISTFILES += \
    valgrindReport.txt \
    unittests/makefile
