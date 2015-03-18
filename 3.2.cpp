#include "3.2.h"

#include <iostream>
using namespace std;

/*
3.2 How would you design a stack which, in addition to push and pop,
also has a function min which returns the minimum element? Push,
pop and min should all operate in O(1) time.
*/

Data::Data(int value, int minIndex):
    m_value(value),
    m_minIndex(minIndex)
{

}

Data::Data():
    m_value(0),
    m_minIndex(-1)
{

}

MinStack::MinStack(int capacity):
    m_data(capacity),
    m_minimums(capacity)
{
}

void MinStack::push(int value)
{
    if (m_data.size() == 0)
    {
        m_data.push(Data(value, 0));
        m_minimums.push(value);
    }
    else
    {
        if (value < m_minimums.top())
            m_minimums.push(value);

        m_data.push(Data(value, m_minimums.size()-1));
    }
}

int MinStack::pop()
{
    return m_data.pop().m_value;
}

int MinStack::capacity() const
{
    return m_data.capacity();
}

int MinStack::size() const
{
    return m_data.size();
}

int MinStack::min() const
{
    return m_minimums[m_data.top().m_minIndex];
}

void test32()
{
    MinStack minStack(10);
    minStack.push(3);
    minStack.push(5);
    minStack.push(2);
    minStack.push(7);
    assert(minStack.min() == 2);
    assert(minStack.pop() == 7);
    assert(minStack.pop() == 2);
    assert(minStack.min() == 3);

    cout << "min " << minStack.min() << endl;
}
