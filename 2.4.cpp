#include "2.4.h"

#include <LinkedList.h>
#include <assert.h>
#include <iostream>

/*
 * 2.4 Write code to partition a linked list around a value x,
 * such that all nodes less than x come before all nodes
 * greater than or equal to x.
 *
 */

void test2_4()
{
    Node<int>* pHead = new Node<int>(5);
    pHead->addToEnd(10);
    pHead->addToEnd(1);
    pHead->addToEnd(8);
    pHead->addToEnd(2);
    pHead->addToEnd(6);
    pHead->addToEnd(4);
    pHead->addToEnd(3);
    pHead->addToEnd(11);
    pHead->addToEnd(0);

    int x = 5;

    Node<int>* pLess = 0;
    Node<int>* pMore = 0;

    Node<int>* pNode = pHead;

    while (pNode)
    {
        Node<int>* pNext = pNode->m_pNext;
        if (pNode->m_data < x)
        {
            pNode->m_pNext = pLess;
            pLess = pNode;
        }
        else
        {
            pNode->m_pNext = pMore;
            pMore = pNode;
        }
        pNode = pNext;
    }

    std::cout << "less than x:" << std::endl;

    Node<int>::print(pLess);

    pNode = pLess;

    while (pNode)
    {
        assert(pNode->m_data < x);
        pNode = pNode->m_pNext;
    }

    std::cout << "more than x:" << std::endl;

    Node<int>::print(pMore);

    pNode = pMore;

    while (pNode)
    {
        assert(pNode->m_data >= x);
        pNode = pNode->m_pNext;
    }
}
