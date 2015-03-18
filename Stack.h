#ifndef STACK_H
#define STACK_H

template <class Type>
class Stack
{
public:

    Stack(unsigned int size);

    void push(Type value);

    Type pop();

    Type top() const;

    int capacity() const;

    int size() const;

private:
    Type*           m_data;
    int             m_top;
    int             m_capacity;
};

void testStack();

#endif // STACK_H
