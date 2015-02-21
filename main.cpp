#include "main.h"
#include "1.1-uniqueChars.h"
#include "1.2-reverseString.h"
#include "1.3-anagrams.h"
#include "1.4-replaceSpaces.h"
#include "1.6-matrixRotation.h"
#include "2.1-listRemoveDuplicates.h"
#include "list.h"

#pragma clang diagnostic ignored "-Wunused-parameter"

int main(int argc, char* argv[])
{
    testUniqueChars();
    testAnagrams();
    replaceSpacesInPlace();
    testMatrixRotation();
    testLinkedList();
    testRemoveDuplicates();
    return 0;
}
