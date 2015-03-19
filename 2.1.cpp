#include "2.1.h"

#include <set>
#include <iostream>
#include "LinkedList.h"

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

void testRemoveDuplicates()
{
    cout << "testing linked list removal" << endl;
    Node<int> n(0);
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
    cout << "before removal" << endl;
    n.print(&n);
    removeDuplicates(&n);
    cout << "after removal" << endl;
    n.print(&n);
}
