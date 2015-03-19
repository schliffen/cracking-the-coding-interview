#include "2.2.h"
#include "LinkedList.h"
#include <assert.h>

#include <iostream>

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
    Node<int> head(0);
    head.addToEnd(1);
    head.addToEnd(2);
    head.addToEnd(3);
    head.addToEnd(4);
    head.addToEnd(5);
    head.addToEnd(6);
    head.addToEnd(7);

    Node<int>* kth = findKFromEnd(&head, 4);

    assert(kth->m_data == 4);
    std::cout << "2.2 passed" << std::endl;
}
