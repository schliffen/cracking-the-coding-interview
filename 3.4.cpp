#include "3.4.h"

/*
 * 3.4 In the classic problem of the Towers of Hanoi,
 * you have 3 towers and N disks of different sizes
 * which can slide onto any tower. The puzzle starts
 * with disks sorted in ascending order of size from
 * top to bottom (i.e., each disk sits on top of an
 * even larger one). You have the following constraints:
 * (1) Only one disk can be moved at a time.
 * (2) A disk is slid off the top of one tower onto
 * the next tower. (3) A disk can only be placed on
 * top of a larger disk. - Write a program to move
 * the disks from the first tower to the last using stacks.
 */

#include "Stack.h"

#include <iostream>
#include <assert.h>

using namespace std;

void MoveTowerofHanoi(int disk, Stack<int> *source, Stack<int> *temp, Stack<int> *destination)
{
    if (disk==1)
    {
        destination->push(source->pop());
    }
    else
    {
        MoveTowerofHanoi(disk-1,source,destination,temp);
        destination->push(source->pop());
        MoveTowerofHanoi(disk-1,temp,source,destination);
    }
}


void solveFor(int disks)
{
    Stack<int>* source = new Stack<int>();
    for(int i=disks; i>0; --i) {
        source->push(i);
    }

    Stack<int>* temp = new Stack<int>();
    Stack<int>* destination = new Stack<int>();
    MoveTowerofHanoi(disks,source,temp,destination);
    assert(destination->peek() == 1);
    delete source;
    delete temp;
    delete destination;
}

void test3_4()
{
    solveFor(4);
}
