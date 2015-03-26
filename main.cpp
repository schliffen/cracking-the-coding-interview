#include "1.1.h"
#include "1.2.h"
#include "1.3.h"
#include "1.4.h"
#include "1.5.h"
#include "1.6.h"
#include "1.7.h"
#include "1.8.h"
#include "2.1.h"
#include "2.2.h"
#include "2.3.h"
#include "2.4.h"
#include "2.5.h"
#include "2.6.h"
#include "2.7.h"
#include "3.1.h"
#include "3.3.h"
#include "4.1.h"
#include "5.1.h"
#include "9.1.h"
#include "9.x.0.h"
#include "LinkedList.h"
#include "BinaryTreePrettyPrint.h"
#include "Utils.h"
#include "Stack.h"
#include "Vector.h"

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    (void)argc;
    (void)argv;
    testLinkedList();
    testBitFunctions();
    testFitBits();
    testStack();
    testVector();

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
    test4_1();
    test9x0();
    test9_1();
    test3_3();

    return 0;
}
