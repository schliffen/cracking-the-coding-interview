#include "LinkedList.h"
#include <stdio.h>
#include <iostream>

using namespace std;

void testLinkedList()
{
    Node<int> n(0);
    n.addToEnd(1);
    n.addToEnd(2);
    n.addToEnd(3);
    n.addToEnd(4);
    n.addToEnd(5);
    n.print(&n);
}
