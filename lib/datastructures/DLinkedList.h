#ifndef DLINKEDLIST_H
#define DLINKEDLIST_H

template <class a_type>
class DNode
{
public:
                    DNode(a_type data);
                    DNode();
    void            printList();
    DNode<a_type>*  addToEnd(a_type data);

    DNode<a_type> *&next();
    DNode<a_type> *&prev();
    a_type          data();

private:
    a_type          m_data;
    DNode<a_type>*  m_pNext;
    DNode<a_type>*  m_pPrev;
};

#include "DLinkedList.hpp"

#endif
