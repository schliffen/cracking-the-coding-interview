#include "4.5.h"

#include "lib/datastructures/BinaryTree.h"
#include "assert.h"

/*
    4.5 Implement a function to check if a binary tree is a binary search tree.
*/

void test4_5()
{
    int array[] = {0,1,2,3,4,5,6,7,8};
    BinaryTree<int>* pBST = BinaryTree<int>::createMinimalBST(array, 0, 8);
    assert(BinaryTree<int>::isBST(pBST));

    BinaryTree<int> tree(8);
    tree.left = new BinaryTree<int>(3);
    tree.right = new BinaryTree<int>(2);
    assert(!BinaryTree<int>::isBST(&tree));
}
