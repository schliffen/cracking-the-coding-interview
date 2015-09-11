void test1_1();
void test1_2();
void test1_3();
void test1_4();
void test1_5();
void test1_6();
void test1_7();
void test1_8();
void test4_1();
void test4_2();
void test4_3();
void test4_4();
void test4_5();
void test4_6();
void test4_7();
void test4_8();
void test4_9();
void test2_1();
void test2_2();
void test2_3();
void test2_4();
void test2_5();
void test2_6();
void test2_7();
void test3_1();
void test3_3();
void test3_4();
void test3_5();
void test3_6();
void test3_7();

void test5_1();
void test5_2();
void test5_3();
void test5_7();

void test9_1();
void test9x0();
void test11_1();
void test12_1();
void test12_x_0();

void test13_1();

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
