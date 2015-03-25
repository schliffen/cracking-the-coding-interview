#include "LinkedList.h"
#include <stdio.h>
#include <iostream>
#include <assert.h>

using namespace std;

void testLinkedList()
{
    Node<int> n(0);
    n.addToEnd(1);
    n.addToEnd(2);
    n.addToEnd(3);
    n.addToEnd(4);
    n.addToEnd(5);
    assert(n[5]->m_data == 5);

    int data[] = {0,1,2,3,4,5};
    Node<int> m(data, 6);
    assert(m[5]->m_data == 5);

    Node<int>* r = m.reverse();
    assert((*r)[0]->m_data == 5);
    assert((*r)[5]->m_data == 0);

    Node<int>* pDuplicate = r->duplicate();
    assert((*pDuplicate)[0]->m_data == 5);
    assert((*pDuplicate)[0] != (*r)[0]);
}
