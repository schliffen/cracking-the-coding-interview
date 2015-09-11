#include "lib/datastructures/LinkedList.h"
#include <assert.h>

#include <iostream>

/*
    2.2 Implement an algorithm to find the kth to
    last element of a singly linked list.
*/

Node<int>* findKFromEnd(Node<int>* head, int k)
{
    int numCovered = 0;
    Node<int>* current = head;
    Node<int>* desired = head;

    while (current->m_pNext)
    {
        numCovered++;
        if (numCovered >= k)
        {
            desired = desired->m_pNext;
        }
        current = current->m_pNext;
    }
    if (numCovered >= k)
        return desired;
    return 0;
}

void test2_2()
{
    int data[] = {0,1,2,3,4,5,6,7};
    Node<int> head(data, 8);

    Node<int>* kth = findKFromEnd(&head, 4);

    assert(kth->m_data == 4);
    std::cout << "2.2 passed" << std::endl;
}
