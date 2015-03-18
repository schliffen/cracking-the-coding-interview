#include "main.h"
#include "1.1-uniqueChars.h"
#include "1.2-reverseString.h"
#include "1.3-anagrams.h"
#include "1.4-replaceSpaces.h"
#include "1.6-matrixRotation.h"
#include "2.1-listRemoveDuplicates.h"
#include "LinkedList.h"
#include "binaryTreePrettyPrint.h"
#include "4.1-treeBalanced.h"
#include "utils.h"
#include "5.1.h"
#include "Stack.h"

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    testUniqueChars();
    testAnagrams();
    replaceSpacesInPlace();
    testMatrixRotation();
    testLinkedList();
    testRemoveDuplicates();
    solution4_1();
    testBitFunctions();
    testFitBits();
    testStack();
    return 0;
}
