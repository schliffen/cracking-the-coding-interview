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
    unittests/testbinarytree.cpp \
    utils/SampleBinaryTrees.cpp \
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
    solutions/conceptsAndAlgorithms/bitManipulation/5.2.cpp \
    solutions/conceptsAndAlgorithms/recursionAndDynamicProgramming/9.1.cpp \
    solutions/conceptsAndAlgorithms/recursionAndDynamicProgramming/9.x.0.cpp \
    utils/BinaryTreeRenderer.cpp \
    solutions/conceptsAndAlgorithms/sortingAndSearching/11.1.cpp


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
    datastructures/BinaryTree.h \
    unittests/testbinarytree.h \
    utils/SampleBinaryTrees.h \
    datastructures/BinaryTree.hpp \
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
    utils/BinaryTreeRenderer.h \
    solutions/conceptsAndAlgorithms/sortingAndSearching/11.1.h


QMAKE_CXXFLAGS = -Wno-write-strings -Wno-unused-parameter

OTHER_FILES += \
    interviewQuestions.txt
