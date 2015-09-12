#include "lib/datastructures/LinkedList.h"
#include <assert.h>
#include <iostream>
#include <cstdio>

/*
 * 2.4 Write code to partition a linked list around a value x,
 * such that all nodes less than x come before all nodes
 * greater than or equal to x.
 *
 */

void test2_4() {
    int data[] = {5, 10, 1, 8, 2, 6, 4, 3, 11, 0};
    Node<int>* pHead = new Node<int>(data, 10);

    int x = 5;

    Node<int>* pLess = 0;
    Node<int>* pMore = 0;

    Node<int>* pNode = pHead;

    while (pNode) {
        Node<int>* pNext = pNode->m_pNext;
        if (pNode->m_data < x) {
            pNode->m_pNext = pLess;
            pLess = pNode;
        } else {
            pNode->m_pNext = pMore;
            pMore = pNode;
        }
        pNode = pNext;
    }

    pNode = pLess;

    while (pNode) {
        assert(pNode->m_data < x);
        pNode = pNode->m_pNext;
    }

    pNode = pMore;

    while (pNode) {
        assert(pNode->m_data >= x);
        pNode = pNode->m_pNext;
    }
    printf("2.4 passed!\n");
}
