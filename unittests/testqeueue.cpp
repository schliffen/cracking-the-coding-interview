#include "testqeueue.h"
#include "lib/Queue.h"
#include <assert.h>

#include "testhelper.h"

void testQueueMain()
{
    Queue<int> q;

    for (int i = 0; i < 1e6; i++)
        q.enqueue(i);

    for (int i = 0; i < 1e6; i++)
        assert(q.dequeue() == i);
}

START_TEST(testQueue)
TEST(testQueueMain)
END_TEST
