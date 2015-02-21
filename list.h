#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node
{
public:
    Node(int data);

    void addToEnd(int data)
    {
        Node* pNew = new Node(data);
        Node* pEnd = this;
        while (pEnd->m_pNext)
            pEnd = pEnd->m_pNext;

        pEnd->m_pNext = pNew;
    }

    static void print(Node* pNode);

private:
    int m_data;
    Node* m_pNext;
};

void testLinkedList();

#endif
