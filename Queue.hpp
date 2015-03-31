#ifndef QUEUE_HPP
#define QUEUE_HPP

template <class a_type>
Queue<a_type>::Queue():
    m_pTail(0),
    m_pHead(0),
    m_size(0)
{
}

template <class a_type>
void Queue<a_type>::enqueue(const a_type& data)
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

template <class a_type>
a_type Queue<a_type>::dequeue()
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

template <class a_type>
int Queue<a_type>::size() const
{
    return m_size;
}

#endif // QUEUE_HPP
