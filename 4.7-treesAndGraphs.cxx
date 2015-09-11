#include <iostream>

using namespace std;

// 4.7 Design an algorithm and write code to find the first common ancestor
// of two nodes in a binary tree. Avoid storing additional nodes in a data structure.
// n.b.: This is not necessarily a binary search tree.

#include "lib/utils/SampleBinaryTrees.h"
#include <assert.h>

BinaryTree<int>* findCommonAncestor(BinaryTree<int>* pRoot, BinaryTree<int>* pA, BinaryTree<int>* pB) {
    BinaryTree<int>* pALeft = 0, *pARight = 0, *pBLeft = 0, *pBRight = 0;

    if (!pRoot)
        return 0;

    // look for a in the left subtree
    pALeft = pRoot->left ? pRoot->left->find(pA->data) : 0;
    // look for a in the right subtree
    pARight = pRoot->right ? pRoot->right->find(pA->data) : 0;

    // look for b in the left subtree
    pBLeft = pRoot->left ? pRoot->left->find(pB->data) : 0;
    // look for b in the right subtree
    pBRight = pRoot->right ? pRoot->right->find(pB->data) : 0;

    // if both nodes are in the left subtree
    if (pALeft && pBLeft) {
        // do the same process all over for left subtree
        return findCommonAncestor(pRoot->left, pA, pB);
    }
    // if both nodes are in the right subtree
    else if (pARight && pBRight) {
        // do the same process all over for the right subtree
        return findCommonAncestor(pRoot->right, pA, pB);
    }
    // if a and b were found on different sides
    else if ((pALeft && pBRight) || (pARight && pBLeft)) {
        // we've found our common ancestor
        return pRoot;
    }

    return 0;
}

void test4_7() {
    BinaryTree<int>* pNode = new BinaryTree<int>(1);
    buildFullBinaryTree(pNode, 1, 5);

    BinaryTree<int>* p10 = pNode->find(10);
    BinaryTree<int>* p18 = pNode->find(18);

    BinaryTree<int>* pCommonAncestor = findCommonAncestor(pNode, p10, p18);

    assert(pCommonAncestor && pCommonAncestor->data == 2);

    cout << "4.7 passed!" << endl;
}
