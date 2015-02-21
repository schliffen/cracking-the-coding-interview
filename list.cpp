#include "list.h"
#include <stdio.h>
#include <iostream>

using namespace std;

template<class a_type>
Node<a_type>::Node(a_type data):
    m_data(data),
    m_pNext(0)
{
}

template<class a_type>
void Node<a_type>::print(Node<a_type> *pNode)
{
    while (pNode->m_pNext)
    {
        cout << "Node: " << pNode->m_data << endl;
        pNode = pNode->m_pNext;
    }
}

void testLinkedList()
{
    Node<int> n(0);
    n.addToEnd(1);
    n.addToEnd(2);
    n.addToEnd(3);
    n.addToEnd(4);
    n.addToEnd(5);
    n.print(&n);
}
