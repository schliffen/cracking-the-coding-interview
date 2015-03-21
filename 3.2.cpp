#include "3.2.h"
#include "LinkedList.h"
#include <iostream>
#include <assert.h>

/*
 * 2.3 Implement an algorithm to delete a node in the middle of a singly linked list,
 * given only access to that node. Input: the node c from the linked
 * list a->b->c->d->e,
 * Result: nothing is returned, but the new linked list looks like a->b->d->e
 */

void deleteNode(Node<int>* pNode)
{
    Node<int>* pNext = pNode->m_pNext;
    pNode->m_data = pNext->m_data;
    pNode->m_pNext = pNext->m_pNext;
    delete pNext;
    pNext = 0;
}

void test3_2()
{
    Node<int> head(1);
    head.addToEnd(2);
    head.addToEnd(3);
    Node<int>* n = head.addToEnd(4);
    head.addToEnd(5);
    head.addToEnd(6);
    head.addToEnd(7);

    Node<int>::print(&head);

    deleteNode(n);
    n = 0;

    std::cout << "-----" << std::endl;

    Node<int>::print(&head);

    assert(head.find(4) == 0);

    std::cout << "3.2 passed" << std::endl;
}
