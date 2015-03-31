#ifndef DLINKEDLIST_HPP
#define DLINKEDLIST_HPP

#include <iostream>
using namespace std;

template<class a_type>
DNode<a_type>::DNode(a_type data):
    m_data(data),
    m_pNext(0),
    m_pPrev(0)
{
}

template<class a_type>
DNode<a_type>::DNode():
    m_data(),
    m_pNext(0),
    m_pPrev(0)
{
}

template<class a_type>
void DNode<a_type>::printList()
{
    DNode<a_type> *pNode = this;
    while (pNode)
    {
        std::cout << "Node: " << pNode->m_data << std::endl;
        pNode = pNode->m_pNext;
    }
}

template<class a_type>
DNode<a_type>* DNode<a_type>::addToEnd(a_type data)
{
    cout << "adding " << data << " to end" << endl;
    DNode<a_type>* pNode = this;
    while (pNode->m_pNext)
    {
        pNode = pNode->m_pNext;
    }
    DNode<a_type>* pNew = new DNode<a_type>(data);
    pNew->m_pPrev = pNode;
    pNode->m_pNext = pNew;
    return pNew;
}

template<class a_type>
DNode<a_type> *&DNode<a_type>::next()
{
    return m_pNext;
}

template<class a_type>
DNode<a_type> *&DNode<a_type>::prev()
{
    return m_pPrev;
}

template<class a_type>
a_type DNode<a_type>::data()
{
    return m_data;
}

#endif // DLINKEDLIST_HPP
