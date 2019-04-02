#include "lib/LinkedList.h"
#include <iostream>
#include <assert.h>

/*
 * 2.3 Implement an algorithm to delete a node in the middle of a singly linked list,
 * given only access to that node. Input: the node c from the linked
 * list a->b->c->d->e,
 * Result: nothing is returned, but the new linked list looks like a->b->d->e
 */

void deleteNode(Node<int>* pNode) {
    Node<int>* pNext = pNode->m_pNext;
    pNode->m_data = pNext->m_data;
    pNode->m_pNext = pNext->m_pNext;
    delete pNext;
    pNext = 0;
}

void test2_3() {
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Node<int> head(data, 9);
    Node<int>* n = head.find(4);

    deleteNode(n);
    n = 0;

    assert(head.find(4) == 0);

    std::cout << "2.3 passed" << std::endl;
}
