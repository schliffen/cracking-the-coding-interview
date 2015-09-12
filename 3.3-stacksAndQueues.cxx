/* 3.3
 * Imagine a (literal) stack of plates. If the stack gets too high,
 * it might topple. Therefore, in real life, we would likely start a
 * new stack when the previous stack exceeds some threshold. Implement
 * a data structure SetOfStacks that mimics this. SetOfStacks should
 * be composed of several stacks and should create a new stack once the
 * previous one exceeds capacity. SetOfStacks.push() and
 * SetOfStacks.pop() should behave identically to a single stack
 * (that is, pop() should return the same values as it would if there
 * were just a single stack). Implement a function popAt(int index)
 * which performs a pop operation on a specific sub-stack.
 */

#include "lib/datastructures/Stack.h"
#include "lib/datastructures/vector.h"

#include "assert.h"

template<class T>
class SetOfStacks {
    public:
        SetOfStacks(int capacity):
            m_capacity(capacity),
            m_stacks() {
        }

        Stack<T>* getLastStack() {
            int size = m_stacks.size();
            assert(size >= 0);
            if (size) {
                return &m_stacks[m_stacks.size() - 1];
            }
            return 0;
        }

        void push(T data) {
            Stack<T>* pStack = getLastStack();
            if (pStack && pStack->size() != m_capacity) {
                pStack->push(data);
            } else {
                Stack<T> newStack;
                newStack.push(data);
                m_stacks.push_back(newStack);
            }
        }

        T top() {
            return getLastStack()->peek();
        }

        T pop() {
            assert(m_stacks.size() != 0);
            Stack<T>* pStack = getLastStack();
            assert(pStack);
            if (pStack->isEmpty()) {
                m_stacks.resize(m_stacks.size() - 1);
                pStack = getLastStack();
                assert(pStack);
            }
            return pStack->pop();
        }

        T popAt(int index) {
            return m_stacks[index].pop();
        }

        int numStacks() {
            return m_stacks.size();
        }

    private:
        int                            m_capacity;
        ctci::vector<Stack<T> >        m_stacks;
};

void test3_3() {
    SetOfStacks<int> stacks(10);
    for (int i = 0; i < 100; i++) {
        stacks.push(i);
        assert(stacks.top() == i);
    }
    for (int i = 99; i >= 0; i--) {
        assert(stacks.pop() == i);
    }

    for (int i = 0; i < 100; i++) {
        stacks.push(i);
        assert(stacks.top() == i);
    }
    assert(stacks.popAt(0) == 9);
    assert(stacks.popAt(1) == 19);
    assert(stacks.popAt(2) == 29);
    printf("3.3 passed!\n");
}

