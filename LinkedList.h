#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

template <class a_type> class Node
{
public:
    Node(a_type data);
    Node(a_type data, Node<a_type>* pNext);
    Node(a_type data[], int n);
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

    Node* operator[](int index)
    {
        Node<a_type>* pNode = this;
        for (int i = 0; i < index; i++)
        {
            pNode = pNode->m_pNext;
            if (i == index)
            {
                break;
            }
        }
        return pNode;
    }

    void printList();

    // keep those public for simplicity
    a_type m_data;
    Node<a_type>* m_pNext;
};

template<class a_type>
Node<a_type>::Node(a_type data):
    m_data(data),
    m_pNext(0)
{
}

template<class a_type>
Node<a_type>::Node(a_type data, Node<a_type>* pNext):
    m_data(data),
    m_pNext(pNext)
{
}

template<class a_type>
Node<a_type>::Node():
    m_data(a_type()),
    m_pNext(0)
{
}

template<class a_type>
Node<a_type>::Node(a_type data[], int n):
    m_data(0),
    m_pNext(0)
{
    m_data = data[0];
    Node<a_type>* pNode = this;
    for (int i = 1; i < n; i++)
    {
        Node<a_type>* pNew = new Node<a_type>(data[i]);
        pNode->m_pNext = pNew;
        pNode = pNew;
    }
}

template<class a_type>
void Node<a_type>::printList()
{
    Node<a_type> *pNode = this;
    while (pNode)
    {
        std::cout << "Node: " << pNode->m_data << std::endl;
        pNode = pNode->m_pNext;
    }
}

void testLinkedList();

#endif
