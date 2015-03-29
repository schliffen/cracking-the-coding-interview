#include "3.5.h"
#include "Stack.h"
#include <assert.h>
#include <iostream>

using namespace std;

/*
 * 3.5 Implement a MyQueue class which implements a queue using two stacks.
 */

template <class Type>
class MyQueue
{
private:
    Stack<Type> 	m_s0;
    Stack<Type> 	m_s1;
    int		m_s;
public:
    MyQueue():
        m_s0(),
        m_s1(),
        m_s(0)
    {
    }

    void push(Type data)
    {
        if (m_s == 1)
        {
            transfer(&m_s1, &m_s0);
            m_s = 0;
        }
        m_s0.push(data);
    }

    Type pop()
    {
        if (m_s == 0)
        {
            transfer(&m_s0, &m_s1);
            m_s = 1;
        }
        return m_s1.pop();
    }

    void transfer(Stack<Type>* source, Stack<Type>* dest)
    {
        while (source->size() != 0)
            dest->push(source->pop());
    }

    Type peek()
    {
        if (m_s == 0)
        {
            transfer(&m_s0, &m_s1);
            m_s = 1;
        }
        return m_s1.peek();
    }
};

void test3_5()
{
    MyQueue<int> mq;
    mq.push(0);
    assert(mq.peek() == 0);
    mq.push(1);
    assert(mq.peek() == 0);
    mq.push(2);
    assert(mq.peek() == 0);
    assert(mq.pop() == 0);
    assert(mq.pop() == 1);
    assert(mq.pop() == 2);
    mq.push(3);
    mq.push(4);
    mq.push(5);
    assert(mq.pop() == 3);
    mq.push(6);
    assert(mq.pop() == 4);
    assert(mq.pop() == 5);
    assert(mq.pop() == 6);
    
    for (int i = 0; i < 1e3; i++)
    {
        mq.push(i);
        assert(mq.peek() == 0);
    }
    
    for (int i = 0; i < 1e3; i++)
    {
        assert(mq.pop() == i);
    }
    
    cout << "test3_5 passed!" << endl;
}
