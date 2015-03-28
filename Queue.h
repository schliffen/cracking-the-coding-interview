#ifndef QUEUE_H
#define QUEUE_H

#include "DLinkedList.h"
#include <assert.h>

template <class a_type>
class Queue
{
public:
    Queue():
        m_pTail(0),
        m_pHead(0),
        m_size(0)
    {
    }

    void enqueue(const a_type& data)
    {
        m_size++;
        DNode<a_type>* pNew = new DNode<a_type>(data);
        if (m_pTail == 0 && m_pHead == 0)
        {
            m_pTail = pNew;
            m_pHead = pNew;
            return;
        }

        assert(m_pHead);
        assert(m_pTail);

        pNew->next() = m_pTail;
        m_pTail->prev() = pNew;
        m_pTail = pNew;
    }

    a_type dequeue()
    {
        assert(m_pHead);
        assert(m_pTail);
        m_size--;
        a_type ret = m_pHead->data();
        DNode<a_type>* pNode = m_pHead;
        m_pHead = m_pHead->prev();
        if (m_pHead == 0)
            m_pTail = 0;
        delete pNode;
        return ret;
    }

    int size() const
    {
        return m_size;
    }

private:
    DNode<a_type>*   m_pTail;
    DNode<a_type>*   m_pHead;
    int              m_size;
};

#endif
