#ifndef STACK_HPP
#define STACK_HPP

#include <assert.h>
#include <iostream>
#include "datastructures/DLinkedList.h"

template<class Type>
Stack<Type>::Stack():
    m_pRoot(0),
    m_pTop(0),
    m_size(0)
{
}

template<class Type>
Stack<Type>::Stack(Type* data, int n):
    m_pRoot(0),
    m_pTop(0),
    m_size(0)
{
    for (int i = 0; i < n; i++)
        push(data[i]);
}

template<class Type>
Stack<Type>::Stack(const Stack<Type> &rOther):
    m_pRoot(0),
    m_pTop(0),
    m_size(0)
{
    DNode<Type>* pNode = rOther.m_pRoot;
    while (pNode)
    {
        push(pNode->data());
        pNode = pNode->next();
    }
}

template<class Type>
Stack<Type>::~Stack()
{
    DNode<Type>* pNode = m_pTop;
    while (pNode)
    {
        DNode<Type>* pPrev = pNode->prev();
        delete pNode;
        pNode = pPrev;
    }
}

template<class Type>
Stack<Type>& Stack<Type>::operator=(const Stack<Type> &rOther)
{
    if (this == &rOther)
        return *this;
    m_pRoot = 0;
    m_pTop = 0;
    m_size = 0;
    DNode<Type>* pNode = rOther.m_pRoot;
    while (pNode)
    {
        push(pNode->data());
        pNode = pNode->next();
    }
    return *this;
}

template<class Type>
void Stack<Type>::push(Type value)
{
    DNode<Type>* pNew = new DNode<Type>(value);
    if (m_size == 0)
    {
        m_pRoot = pNew;
        m_pTop = pNew;
    }
    else
    {
        pNew->prev() = m_pTop;
        m_pTop->next() = pNew;
        m_pTop = pNew;
    }
    m_size++;
}

template<class Type>
Type Stack<Type>::pop()
{
    Type data = m_pTop->data();
    DNode<Type>* pPrev = m_pTop->prev();
    delete m_pTop;
    m_pTop = pPrev;
    m_size--;
    if (m_size == 0)
    {
        assert(m_pTop == 0);
        assert(m_pRoot != 0);
        m_pRoot = 0;
    }
    return data;
}

template<class Type>
Type Stack<Type>::peek() const
{
    assert(m_pTop);
    return m_pTop->data();
}

template<class Type>
int Stack<Type>::size() const
{
    return m_size;
}

template<class Type>
bool Stack<Type>::isEmpty() const
{
    return size() <= 0;
}

template<class Type>
void Stack<Type>::print() const
{
    DNode<Type>* pNode = m_pRoot;
    while (pNode)
    {
        cout << "Node: " << pNode->data() << endl;
        pNode = pNode->next();
    }
}

#endif // STACK_HPP
