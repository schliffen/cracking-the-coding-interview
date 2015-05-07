#include "2.7.h"
#include "datastructures/LinkedList.h"
#include <assert.h>

using namespace std;

// 2.7 Implement a function to check if a linked list is a palindrome.

void test2_7()
{
    char data[] = {'a','s','a','n','t','a','a','t','n','a','s','a'};
    Node<char> head(data, 12);
    Node<char>* duplicate = head.duplicate();
    Node<char>* reversed = duplicate->reverse();

    Node<char>* pNode = &head;
    Node<char>* pRNode = reversed;

    bool palindrome = true;

    while (pNode)
    {
        if (pNode->m_data != pRNode->m_data)
            palindrome = false;
        pNode = pNode->m_pNext;
        pRNode = pRNode->m_pNext;
    }

    assert(palindrome);
    printf("2.7 passed!\n");
}
