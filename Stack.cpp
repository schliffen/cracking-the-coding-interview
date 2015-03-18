#include "Stack.h"
#include <assert.h>

void testStack()
{
    Stack<int> stack(10);

    assert(stack.size() == 0);

    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(2);

    assert(stack.size() == 4);
    assert(stack[0] == 5);
    assert(stack[3] == 2);
    assert(stack.pop() == 2);
    assert(stack.top() == 7);
    assert(stack.pop() == 7);
    assert(stack.pop() == 6);
    assert(stack.pop() == 5);

    assert(stack.size() == 0);

    assert(stack.capacity() == 10);
}
