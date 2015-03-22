#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

template <class a_type> class Node
{
public:
    Node(a_type data);
    Node();

    Node* addToEnd(a_type data)
    {
        Node* pNew = new Node(data);
        Node* pEnd = this;
        while (pEnd->m_pNext)
            pEnd = pEnd->m_pNext;

        pEnd->m_pNext = pNew;
        return pNew;
    }

    Node* find(a_type data)
    {
        std::cout << "looking for " << data << std::endl;
        Node* pNode = this;
        while (pNode)
        {
            if (pNode->m_data == data)
            {
                std::cout << "returning " << pNode->m_data << std::endl;
                return pNode;
            }
            pNode = pNode->m_pNext;
        }
        std::cout << "returning 0" << std::endl;
        return 0;
    }

    static void print(Node* pNode);

    // keep those public for simplicity
    a_type m_data;
    Node* m_pNext;
};

template<class a_type>
Node<a_type>::Node(a_type data):
    m_data(data),
    m_pNext(0)
{
}

template<class a_type>
Node<a_type>::Node():
    m_data(a_type()),
    m_pNext(0)
{
}

template<class a_type>
void Node<a_type>::print(Node<a_type> *pNode)
{
    while (pNode->m_pNext)
    {
        std::cout << "Node: " << pNode->m_data << std::endl;
        pNode = pNode->m_pNext;
    }
}

void testLinkedList();

#endif
