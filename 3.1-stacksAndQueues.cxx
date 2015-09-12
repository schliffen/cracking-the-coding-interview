#include <assert.h>

// 3.1 Describe how you could use a single array to implement three stacks.

template <class a_type>
class ArrayStacks {
    public:
        ArrayStacks(int capacity) {
            m_data = new a_type[capacity * 3];
            m_stackPointer[0] = 0;
            m_stackPointer[1] = 0;
            m_stackPointer[2] = 0;
        }

        ~ArrayStacks() {
            delete m_data;
        }

        void push(a_type t, int stack) {
            m_stackPointer[stack]++;
            m_data[m_stackPointer[stack]] = t;
        }

        a_type top(int stack) {
            return m_data[m_stackPointer[stack]];
        }

        a_type pop(int stack) {
            a_type val = m_data[m_stackPointer[stack]];
            m_stackPointer[stack]--;
            return val;
        }

    private:
        a_type*  m_data;
        int m_stackPointer[3];
};

void test3_1() {
    ArrayStacks<int> stacks(3);
    stacks.push(0, 0);
    stacks.push(1, 0);
    stacks.push(2, 0);

    stacks.push(0, 1);
    stacks.push(1, 1);
    stacks.push(2, 1);

    stacks.push(0, 2);
    stacks.push(1, 2);
    stacks.push(2, 2);

    assert(stacks.top(0) == 2);
    assert(stacks.top(1) == 2);
    assert(stacks.top(2) == 2);

    assert(stacks.pop(0) == 2);
    assert(stacks.pop(0) == 1);
    assert(stacks.pop(0) == 0);
}
