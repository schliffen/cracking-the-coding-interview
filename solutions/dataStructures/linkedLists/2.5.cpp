#include "2.5.h"
#include <iostream>
#include "lib/datastructures/LinkedList.h"
#include <assert.h>

/*
 * 2.5
 *
 * You have two numbers represented by a linked list,
 * where each node contains a single digit. The digits are
 * stored in reverse order, such that the Ts digit is at the
 * head of the list. Write a function that adds the two
 * numbers and returns the sum as a linked list. EXAMPLE
 * Input: (7 -> 1 -> 6) + (5 -> 9 -> 2).
 * That is, 617 + 295.
 * Output: 2 -> 1 -> 9.That is, 912.
 *
 * FOLLOW UP Suppose the digits are stored in forward order.
 * Repeat the above problem. EXAMPLE
 * Input: (6 -> 1 -> 7) + (2 -> 9 -> 5).
 * That is, 617 + 295.
 * Output: 9 -> 1 -> 2.
 * That is, 912.
 */

Node<int>* addLists(Node<int>* pA, Node<int>* pB, int carry)
{
    if (pA == 0 && pB == 0 && carry == 0)
        return 0;

    int value = carry;
    if (pA)
        value += pA->m_data;
    if (pB)
        value += pB->m_data;

    Node<int>* result = new Node<int>(value % 10);

    if (pA && pB)
        result->m_pNext = addLists(pA ? pA->m_pNext : 0, pB ? pB->m_pNext : 0, value >= 10 ? 1 : 0);

    return result;
}

void test2_5()
{
    Node<int>* pA = new Node<int>(7);
    pA->addToEnd(1);
    pA->addToEnd(6);

    Node<int>* pB = new Node<int>(5);
    pB->addToEnd(9);
    pB->addToEnd(2);

    Node<int>* pResult = addLists(pA, pB, 0);
    assert(pResult->m_data = 2);
    assert(pResult->m_pNext->m_data = 1);
    assert(pResult->m_pNext->m_pNext->m_data = 9);
    std::cout << "2.5 passed!" << std::endl;
}
