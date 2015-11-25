#ifndef QUEUE_H
#define QUEUE_H

#include "DLinkedList.h"
#include <assert.h>

template <class a_type>
class Queue {
    public:
        Queue();

        void enqueue(const a_type& data);

        a_type dequeue();

        int size() const;

    private:
        DNode<a_type>*   m_pTail;
        DNode<a_type>*   m_pHead;
        int              m_size;
};

#include "Queue.hpp"

#endif
