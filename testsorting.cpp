#include "testsorting.h"
#include "bubblesort.h"
#include <assert.h>
#include <iostream>

using namespace std;

bool isArraySorted(int* data, int n)
{
    bool sorted = true;
    for (int i = 1; i < n; i++)
        if (data[i-1] > data[i])
            sorted = false;
    return sorted;
}

void testBubbleSort()
{
    int data[] = {2,4,6,8,8,1,2,6,7,8,9,4,5,6,3,1,5,6,4,8};
    bubbleSort<int>(data, 20);
    assert(isArraySorted(data, 20));
    cout << "bubble sort passed!" << endl;
}

void testsorting()
{
    testBubbleSort();
}
