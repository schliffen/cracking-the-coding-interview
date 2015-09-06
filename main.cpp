#include "solutions/1.1.h"
#include "solutions/1.2.h"
#include "solutions/1.3.h"
#include "solutions/1.4.h"
#include "solutions/1.5.h"
#include "solutions/1.6.h"
#include "solutions/1.7.h"
#include "solutions/1.8.h"
#include "solutions/2.1.h"
#include "solutions/2.2.h"
#include "solutions/2.3.h"
#include "solutions/2.4.h"
#include "solutions/2.5.h"
#include "solutions/2.6.h"
#include "solutions/2.7.h"
#include "solutions/3.1.h"
#include "solutions/3.3.h"
#include "solutions/3.4.h"
#include "solutions/3.5.h"
#include "solutions/3.6.h"
#include "solutions/3.7.h"
#include "solutions/4.1.h"
#include "solutions/4.2.h"
#include "solutions/4.3.h"
#include "solutions/4.4.h"
#include "solutions/4.5.h"
#include "solutions/4.6.h"
#include "solutions/5.1.h"
#include "solutions/9.1.h"
#include "solutions/9.x.0.h"
#include "solutions/11.1.h"
#include "solutions/12.1.h"
#include "solutions/12.x.0.h"
#include "solutions/13.1.h"
#include "utils/Utils.h"
#include "utils/BinaryTreePrettyPrint.h"
#include "datastructures/LinkedList.h"
#include "datastructures/Stack.h"
#include "datastructures/Vector.h"
#include "unittests/testdlinkedlist.h"
#include "unittests/testlinkedlist.h"
#include "unittests/testvector.h"
#include "unittests/teststack.h"
#include "unittests/testqeueue.h"
#include "unittests/testsorting.h"

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
    test5_1();
    test9x0();
    test9_1();
    test11_1();
    test12_1();
    test12_x_0();
    test13_1();

    test4_6();


    return 0;
}
