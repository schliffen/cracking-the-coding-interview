#include "list.h"
#include <stdio.h>

Node::Node(int data):
    m_data(data),
    m_pNext(0)
{
}

void Node::print(Node *pNode)
{
    while (pNode->m_pNext)
    {
        printf("Node: %i\n", pNode->m_data);
        pNode = pNode->m_pNext;
    }
}


void testLinkedList()
{
    Node n(0);
    n.addToEnd(1);
    n.addToEnd(2);
    n.addToEnd(3);
    n.addToEnd(4);
    n.addToEnd(5);
    n.print(&n);
}
