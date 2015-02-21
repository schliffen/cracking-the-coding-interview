#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <class a_type> class Node
{
public:
    Node(a_type data);

    void addToEnd(int data)
    {
        Node* pNew = new Node(data);
        Node* pEnd = this;
        while (pEnd->m_pNext)
            pEnd = pEnd->m_pNext;

        pEnd->m_pNext = pNew;
    }

    static void print(Node* pNode);

    // keep those public for simplicity
    a_type m_data;
    Node* m_pNext;
};

void testLinkedList();

#endif
