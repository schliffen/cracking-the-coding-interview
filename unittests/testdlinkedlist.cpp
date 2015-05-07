#include "testdlinkedlist.h"

#include "datastructures/DLinkedList.h"
#include <assert.h>
#include <iostream>

using namespace std;

void testDLinkedList()
{
    cout << "testing testDLinkedList" << endl;
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

    cout << "testing DLinkedList passed!" << endl;
}
