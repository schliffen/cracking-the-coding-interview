#ifndef STACK_H
#define STACK_H

#include <assert.h>

template <class Type>
class Stack
{
public:

    Stack(unsigned int size);

    void push(Type value);

    Type pop();

    Type top() const;

    Type operator[](int index) const;

    int capacity() const;

    int size() const;

protected:
    Type*           m_data;
    int             m_top;
    int             m_capacity;
};

template<class Type>
Stack<Type>::Stack(unsigned int size):
    m_data(new Type[size]),
    m_top(-1),
    m_capacity(size)
{
}

template<class Type>
void Stack<Type>::push(Type value)
{
    assert(m_top+1 < m_capacity);
    m_top++;
    m_data[m_top] = value;
}

template<class Type>
Type Stack<Type>::pop()
{
    assert(m_top-1 >= -1);
    return m_data[m_top--];
}

template<class Type>
Type Stack<Type>::top() const
{
    return m_data[m_top];
}

template<class Type>
Type Stack<Type>::operator[](int index) const
{
    return m_data[index];
}

template<class Type>
int Stack<Type>::capacity() const
{
    return m_capacity;
}

template<class Type>
int Stack<Type>::size() const
{
    return m_top+1;
}

void testStack();

#endif // STACK_H
