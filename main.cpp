#include "solutions/dataStructures/arraysAndStrings/1.1.h"
#include "solutions/dataStructures/arraysAndStrings/1.2.h"
#include "solutions/dataStructures/arraysAndStrings/1.3.h"
#include "solutions/dataStructures/arraysAndStrings/1.4.h"
#include "solutions/dataStructures/arraysAndStrings/1.5.h"
#include "solutions/dataStructures/arraysAndStrings/1.6.h"
#include "solutions/dataStructures/arraysAndStrings/1.7.h"
#include "solutions/dataStructures/arraysAndStrings/1.8.h"
#include "solutions/dataStructures/linkedLists/2.1.h"
#include "solutions/dataStructures/linkedLists/2.2.h"
#include "solutions/dataStructures/linkedLists/2.3.h"
#include "solutions/dataStructures/linkedLists/2.4.h"
#include "solutions/dataStructures/linkedLists/2.5.h"
#include "solutions/dataStructures/linkedLists/2.6.h"
#include "solutions/dataStructures/linkedLists/2.7.h"
#include "solutions/dataStructures/stacksAndQueues/3.1.h"
#include "solutions/dataStructures/stacksAndQueues/3.3.h"
#include "solutions/dataStructures/stacksAndQueues/3.4.h"
#include "solutions/dataStructures/stacksAndQueues/3.5.h"
#include "solutions/dataStructures/stacksAndQueues/3.6.h"
#include "solutions/dataStructures/stacksAndQueues/3.7.h"
#include "solutions/dataStructures/treesAndGraphs/4.1.h"
#include "solutions/dataStructures/treesAndGraphs/4.2.h"
#include "solutions/dataStructures/treesAndGraphs/4.3.h"
#include "solutions/dataStructures/treesAndGraphs/4.4.h"
#include "solutions/dataStructures/treesAndGraphs/4.5.h"
#include "solutions/dataStructures/treesAndGraphs/4.6.h"
#include "solutions/dataStructures/treesAndGraphs/4.7.h"
#include "solutions/dataStructures/treesAndGraphs/4.8.h"
#include "solutions/dataStructures/treesAndGraphs/4.9.h"
#include "solutions/conceptsAndAlgorithms/bitManipulation/5.1.h"
#include "solutions/conceptsAndAlgorithms/bitManipulation/5.2.h"
#include "solutions/conceptsAndAlgorithms/bitManipulation/5.3.h"
#include "solutions/conceptsAndAlgorithms/bitManipulation/5.7.h"
#include "solutions/conceptsAndAlgorithms/recursionAndDynamicProgramming/9.1.h"
#include "solutions/conceptsAndAlgorithms/recursionAndDynamicProgramming/9.x.0.h"
#include "solutions/conceptsAndAlgorithms/sortingAndSearching/11.1.h"
#include "solutions/conceptsAndAlgorithms/testing/12.1.h"
#include "solutions/conceptsAndAlgorithms/testing/12.x.0.h"
#include "solutions/knowledgeBased/cAndCpp/13.1.h"
#include "lib/utils/Utils.h"
#include "lib/datastructures/LinkedList.h"
#include "lib/datastructures/Stack.h"
#include "lib/datastructures/vector.h"
#include "unittests/testdlinkedlist.h"
#include "unittests/testlinkedlist.h"
#include "unittests/testvector.h"
#include "unittests/teststack.h"
#include "unittests/testqeueue.h"
#include "unittests/testsorting.h"
#include "unittests/testbinarytree.h"
#include "unittests/testbinarytreerenderer.h"
#include "unittests/teststring.h"

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    (void)argc;
    (void)argv;



    // unit test data structures
    testLinkedList();
    testBitFunctions();
    testStack();
    testVector();
    testDLinkedList();
    testQueue();
    testBinaryTree();
    testBinaryTreeRenderer();
    teststring();

    // unit test algorithms
    testsorting();
    
    // run solution tests
    test1_1();
    test1_3();
    test1_4();
    test1_5();
    test1_6();
    test1_7();
    test1_8();
    test2_1();
    test2_2();
    test2_3();
    test2_4();
    test2_5();
    test2_6();
    test2_7();
    test3_1();
    test3_3();
    test3_4();
    test3_5();
    test3_6();
    test3_7();
    test4_1();
    test4_2();
    test4_3();
    test4_4();
    test4_5();
    test4_6();
    test4_7();
    test4_8();
    test4_9();
    test5_1();
    test5_2();
    test5_3();
    test5_7();
    test9x0();
    test9_1();
    test11_1();
    test12_1();
    test12_x_0();
    test13_1();

    return 0;
}
