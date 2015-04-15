#include "2.1.h"

#include <set>
#include <iostream>
#include <assert.h>
#include "LinkedList.h"

/*
    2.1 Write code to remove duplicates from an unsorted linked list.
    How would you solve this problem if a temporary buffer is not allowed?
*/

using namespace std;

template<class t>
void removeDuplicates(Node<t>* pNode)
{
    Node<t>* pPrevious = 0;
    set<t> values;
    while (pNode != 0)
    {
        if (values.find(pNode->m_data) != values.end())
        {
            pPrevious->m_pNext = pNode->m_pNext;
            delete(pNode);
        }
        else
        {
            values.insert(pNode->m_data);
            pPrevious = pNode;
        }
        pNode = pNode->m_pNext;
    }
}

void test2_1()
{
    Node<int> n(0);
    assert(n[0]->m_data == 0);
    n.addToEnd(1);
    n.addToEnd(2);
    n.addToEnd(3);
    n.addToEnd(4);
    n.addToEnd(5);
    n.addToEnd(5);
    n.addToEnd(5);
    n.addToEnd(6);
    n.addToEnd(7);
    n.addToEnd(6);
    n.addToEnd(8);
    assert(n[11]->m_data == 8);
    removeDuplicates(&n);
    assert(n[8]->m_data == 8);
    cout << "2.1 passed!" << endl;
}
