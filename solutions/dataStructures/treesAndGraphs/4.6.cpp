#include "4.6.h"

// 4.6 Write an algorithm to find the 'next' node (i.e., in-order successor)
// of a given node in a binary search tree. You may assume that
// each node has a link to its parent.

#include "datastructures/BinaryTree.h"
#include "utils/BinaryTreePrettyPrint.h"
#include <iostream>
#include <assert.h>

using namespace std;

// not yet implemented

/*
BinaryTreeP* getNextNodeInorder(BinaryTreeP* pNode)
{
    if (pNode->parent)
        return pNode->parent->right;
    else
        return 0;
}
 */

void test4_6()
{
    /*int array[] = {0,1,2,3,4,5,6,7,8};
    BinaryTreeP* pBST = BinaryTreeP::createMinimalBST(array, 0, 8);

    assert(pBST->right->left->data == 5);

    BinaryTreeP* pNode = getNextNodeInorder(pBST->right->left);

    assert(pNode->data == 7);*/

    //printPretty(pBST, 1, 0, cout);
}
