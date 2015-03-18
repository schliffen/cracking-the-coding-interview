#include "Stack.h"
#include <assert.h>

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
int Stack<Type>::capacity() const
{
    return m_capacity;
}

template<class Type>
int Stack<Type>::size() const
{
    return m_top+1;
}

void testStack()
{
    Stack<int> stack(10);

    assert(stack.size() == 0);

    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(2);

    assert(stack.size() == 4);

    assert(stack.pop() == 2);
    assert(stack.top() == 7);
    assert(stack.pop() == 7);
    assert(stack.pop() == 6);
    assert(stack.pop() == 5);

    assert(stack.size() == 0);

    assert(stack.capacity() == 10);
}
