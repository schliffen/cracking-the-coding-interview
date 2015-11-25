#include "teststack.h"
#include "lib/Stack.h"
#include <assert.h>

#include "testhelper.h"

void testStackMain()
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

    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    stack = Stack<int>(arr, 10);
    // shred
    for (int i = 9; i >= 0; i--)
    {
        assert(stack.peek() == i);
        assert(stack.pop() == i);
    }
    assert(stack.size() == 0);
}

START_TEST(testStack)
TEST(testStackMain)
END_TEST
