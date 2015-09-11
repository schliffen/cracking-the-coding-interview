#include <iostream>
#include <assert.h>

#include "lib/datastructures/BinaryTree.h"

// 4.6 Write an algorithm to find the 'next' node (i.e., in-order successor)
// of a given node in a binary search tree. You may assume that
// each node has a link to its parent.

using namespace std;

BinaryTree<int>* leftMostChild(BinaryTree<int>* n) {
    if (!n)
        return 0;
    while (n->left)
        n = n->left;
    return n;
}

BinaryTree<int>* inOrderSuccessor(BinaryTree<int>* n) {
    if (!n)
        return 0;

    // Has right child -> return leftmost node of right subtree.
    if (n->right) {
        return leftMostChild(n->right);
    } else {
        BinaryTree<int>* current = n;
        BinaryTree<int>* parent = current->parent;
        // Go up until we're on left instead of right
        while (parent && parent->left != current) {
            current = parent;
            parent = parent->parent;
        }
        return parent;
    }
}

void test4_6() {
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    BinaryTree<int>* pBST = BinaryTree<int>::createMinimalBST(array, 0, 8);
    BinaryTree<int>::setParentsOnChildren(pBST);
    assert(inOrderSuccessor(pBST->left->right->right)->data == 4);
    assert(inOrderSuccessor(pBST)->data == 5);
    cout << "4.6 passed!" << endl;
}
