#include <iostream>
#include <assert.h>
#include "lib/datastructures/LinkedList.h"

/*
    2.1 Write code to remove duplicates from an unsorted linked list.
    How would you solve this problem if a temporary buffer is not allowed?
*/

using namespace std;

template<class t>
void removeDuplicates(Node<t>* pHead)
{
    Node<int>* pNode = pHead;
    Node<int>* pPrev = 0;
    
    while(pNode)
    {
        Node<int>* pComp = pNode->m_pNext;

        while (pComp)
        {
            if (pNode->m_data == pComp->m_data)
            {
                Node<int>* pNext = pComp->m_pNext;
                if (pPrev)
                {
                    pPrev->m_pNext = pComp->m_pNext;
                }
                else
                {
                    pNode->m_pNext = pComp->m_pNext;
                }
                delete pComp;
                pComp = pNext;
            }
            else
            {
                pPrev = pComp;
                pComp = pComp->m_pNext;
            }
        }
        pPrev = 0;

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
