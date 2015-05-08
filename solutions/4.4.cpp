#include "4.4.h"

#include "datastructures/BinaryTree.h"
#include "assert.h"

/*
 * Given a binary tree, design an algorithm which creates a linked
 * list of all the nodes at each depth (e.g., if you have a tree with
 * depth D, you'll have D linked lists).
 */

void test4_4()
{
    int array[] = {0,1,2,3,4,5,6,7,8};
    BinaryTree* pRoot = BinaryTree::createMinimalBST(array, 0, 8);
    assert(false);
}
