#include "testqeueue.h"
#include "lib/datastructures/Queue.h"
#include <assert.h>

void testQueue()
{
    Queue<int> q;

    for (int i = 0; i < 1e6; i++)
        q.enqueue(i);

    for (int i = 0; i < 1e6; i++)
        assert(q.dequeue() == i);
}
