#include "unittests/testsorting.h"
#include "algorithms/bubblesort.h"
#include <assert.h>
#include <iostream>
#include "utils/Utils.h"

using namespace std;


void testBubbleSort()
{
    int data[] = {2,4,6,8,8,1,2,6,7,8,9,4,5,6,3,1,5,6,4,8};
    bubbleSort<int>(data, 20);
    assert(isArraySorted(data, 20));
    cout << "bubble sort passed!" << endl;
}


void testBubbleSortOptimised()
{
    int data[] = {2,4,6,8,8,1,2,6,7,8,9,4,5,6,3,1,5,6,4,8};
    bubbleSortOptimised<int>(data, 20);
    assert(isArraySorted(data, 20));
    cout << "optimised bubble sort passed!" << endl;
}

void testsorting()
{
    testBubbleSort();
    testBubbleSortOptimised();
}
