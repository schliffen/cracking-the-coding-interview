#include "3.6.h"

/*
 * 3.6 Write a program to sort a stack in ascending order (with biggest items on top).
 * You may use at most one additional stack to hold items, but you may not copy the
 * elements into any other data structure (such as an array). The stack supports the
 * following operations: push, pop, peek, and isEmpty.
 */

#include <iostream>
#include <assert.h>
#include "datastructures/Stack.h"
#include "utils/Utils.h"

using namespace std;

void test3_6()
{
    int arr[] = {2,1,6,4,8,9,7,5,6,14,2,3,5,4,9,4,5,6,2,1}; int n = 20;
    Stack<int>* a = new Stack<int>(arr, n);
    Stack<int>* b = new Stack<int>;

    bool direction = false;
    bool changed = false;
    do
    {
        changed = false;
        int pivot = a->pop();
        while (!a->isEmpty())
        {
            int cmp = a->pop();
            if (direction ? pivot > cmp : pivot < cmp)
            {
                changed = true;
                b->push(cmp);
            }
            else
            {
                b->push(pivot);
                pivot = cmp;
            }
        }
        b->push(pivot);
        swap(&a, &b, sizeof(Stack<int>*));
        direction = !direction;
    }
    while (changed);

    int i = 0;
    while (!a->isEmpty())
        arr[i++] = a->pop();

    assert(isArraySorted(arr, n));

    delete a;
    delete b;

    cout << "3.6 passed!" << endl;
}
