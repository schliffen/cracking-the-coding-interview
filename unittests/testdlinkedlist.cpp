#include "testdlinkedlist.h"

#include "testhelper.h"

#include "lib/DLinkedList.h"
#include <assert.h>

void testDLinkedListMain()
{
    DNode<int> head(0);
    assert(head.next() == 0);
    head.addToEnd(1);
    head.addToEnd(2);

    DNode<int>* pNode = head.next();

    assert(pNode->data() == 1);
    assert(pNode->prev()->data() == 0);

    pNode = pNode->next();

    assert(pNode->data() == 2);
    assert(pNode->prev()->data() == 1);
}

START_TEST(testDLinkedList)
TEST(testDLinkedListMain)
END_TEST
