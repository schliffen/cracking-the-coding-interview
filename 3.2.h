#ifndef _3_2_H
#define _3_2_H

#include "Stack.h"

struct Data
{
    Data(int value, int minIndex);

    Data();

    int m_value;
    int m_minIndex;
};

class MinStack
{
public:
    MinStack(int capacity);

    void push(int value);

    int pop();

    int capacity() const;

    int size() const;

    int min() const;

private:
    Stack<Data> m_data;
    Stack<int>  m_minimums;
};

void test32();


#endif // _3_2_H
