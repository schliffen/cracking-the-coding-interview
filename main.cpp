#include "main.h"
#include "1.1-uniqueChars.h"
#include "1.2-reverseString.h"
#include "1.3-anagrams.h"
#include "1.4-replaceSpaces.h"
#include "1.6-matrixRotation.h"
#include "2.1-listRemoveDuplicates.h"
#include "list.h"
#include "binaryTreePrettyPrint.h"
#include "4.1-treeBalanced.h"

//#pragma clang diagnostic ignored "-Wunused-parameter"

int main(int argc, char* argv[])
{
    testUniqueChars();
    testAnagrams();
    replaceSpacesInPlace();
    testMatrixRotation();
    testLinkedList();
    testRemoveDuplicates();
    solution4_1();
    return 0;
}
