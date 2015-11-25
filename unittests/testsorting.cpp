#include "unittests/testsorting.h"
#include "lib/bubblesort.h"
#include <assert.h>
#include "lib/Utils.h"

#include "testhelper.h"


void testBubbleSort()
{
    int data[] = {2,4,6,8,8,1,2,6,7,8,9,4,5,6,3,1,5,6,4,8};
    bubbleSort<int>(data, 20);
    assert(isArraySorted(data, 20));
}


void testBubbleSortOptimised()
{
    int data[] = {2,4,6,8,8,1,2,6,7,8,9,4,5,6,3,1,5,6,4,8};
    bubbleSortOptimised<int>(data, 20);
    assert(isArraySorted(data, 20));
}

START_TEST(testsorting)
TEST(testBubbleSort)
TEST(testBubbleSortOptimised)
END_TEST
