#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <class a_type> class Node
{
public:
    Node();
    Node(a_type data);
    Node(a_type data, Node<a_type>* pNext);
    Node(a_type data[], int n);
    Node(const Node& rOther);

    Node* addToEnd(a_type data);
    Node* find(a_type data);
    Node* operator[](int index);

    // reverse in place
    Node* reverse();
    Node* duplicate();
    void printList();

    // keep those public for simplicity
    a_type m_data;
    Node<a_type>* m_pNext;
};

#include "LinkedList.hpp"

#endif
