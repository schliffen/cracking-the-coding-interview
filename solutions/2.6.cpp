#include "2.6.h"
#include "datastructures/LinkedList.h"
#include <assert.h>
#include <iostream>

using namespace std;

// 2.6 Given a circular linked list, implement an algorithm which
// returns the node at the beginning of the loop. DEFINITION Circular
// linked list: A (corrupt) linked list in which a node's next
// pointer points to an earlier node, so as to make a loop in the
// linked list.
// EXAMPLE Input: A - > B - > C - > D - > E - > C [the same C as earlier]
// Output: C


Node<int>* findBeginning(Node<int>* head)
{
    Node<int>* slow = head;
    Node<int>* fast = head;

    /* Find meeting point. This will be LOOP_SIZE - k steps into the * linked list. */
    while (fast != 0 && fast->m_pNext != 0)
    {
        slow = slow->m_pNext;
        fast = fast->m_pNext->m_pNext;
        if (slow == fast)
        {
            break;
        }
    }

    if (!fast && !slow)
        return 0;

    slow = head;
    while (slow != fast)
    {
        slow = slow->m_pNext;
        fast = fast->m_pNext;
    }
    return fast;
}

void test2_6()
{
    int data[] = {0,1,2,3,4,5,6,7,8,9};
    Node<int> head(data, 10);

    head.find(9)->m_pNext = head.find(4);

    assert(findBeginning(&head)->m_data == 4);
    printf("2.6 passed!\n");
}
