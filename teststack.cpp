#include "teststack.h"
#include "Stack.h"
#include <assert.h>



void testStack()
{
    Stack<int> stack;

    assert(stack.size() == 0);

    // populate
    for (int i = 0; i <= 1e6; i++)
    {
        stack.push(i);
    }

    // copy
    Stack<int> copy(stack);
    
    // shred
    for (int i = 1e6; i >= 0; i--)
    {
        assert(stack.peek() == i);
        assert(stack.pop() == i);
    }
    
    assert(stack.size() == 0);

    // shred copy
    for (int i = 1e6; i >= 0; i--)
    {
        int top = copy.peek();
        assert(top == i);
        assert(copy.pop() == i);
    }
    
    assert(copy.size() == 0);
}
