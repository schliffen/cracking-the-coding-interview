#include "3_6.h"

/*
 * 3.6 Write a program to sort a stack in ascending order (with biggest items on top).
 * You may use at most one additional stack to hold items, but you may not copy the
 * elements into any other data structure (such as an array). The stack supports the
 * following operations: push, pop, peek, and isEmpty.
 */

#include "Stack.h"
#include <iostream>

using namespace std;

void test3_6()
{
    //int arr[] = {2,1,6,4,8,9,7,5,6,14,2,3,5,4,9,4,5,6,2,1};
    int arr[] = {3,1,2,4};
    Stack<int> a(arr, 4);
    Stack<int> b;

    cout << "before sort" << endl;

    a.print();

    cout << "after sort" << endl;

    int n = a.size();
    //do
    {
        int pivot = a.pop();
        for (int i = 1; i < n; i++)
        {
            int cmp = a.pop();
            if (pivot < cmp)
            {
                b.push(cmp);
            }
            else
            {
                b.push(pivot);
                pivot = cmp;
            }
        }
        b.push(pivot);
    }
    //while (n > 0);

    b.print();
}
