#include "SampleBinaryTrees.h"

using namespace std;

BinaryTree<int> *buildPreOrderBinaryTree()
{
    BinaryTree<int> *pRoot = new BinaryTree<int>(1);
    pRoot->left = new BinaryTree<int>(2);
    pRoot->left->right = new BinaryTree<int>(6);
    pRoot->left->left = new BinaryTree<int>(3);
    pRoot->left->left->left = new BinaryTree<int>(4);
    pRoot->left->left->right = new BinaryTree<int>(5);
    pRoot->right = new BinaryTree<int>(7);
    pRoot->right->right = new BinaryTree<int>(8);
    return pRoot;
}

BinaryTree<int> *buildPostOrderBinaryTree()
{
    BinaryTree<int> *pRoot = new BinaryTree<int>(8);
    pRoot->left = new BinaryTree<int>(5);
    pRoot->left->right = new BinaryTree<int>(4);
    pRoot->left->left = new BinaryTree<int>(3);
    pRoot->left->left->left = new BinaryTree<int>(1);
    pRoot->left->left->right = new BinaryTree<int>(2);
    pRoot->right = new BinaryTree<int>(7);
    pRoot->right->right = new BinaryTree<int>(6);
    return pRoot;
}

BinaryTree<int> *buildInOrderBinaryTree()
{
    BinaryTree<int> *pRoot = new BinaryTree<int>(6);
    pRoot->left = new BinaryTree<int>(4);
    pRoot->left->right = new BinaryTree<int>(5);
    pRoot->left->left = new BinaryTree<int>(2);
    pRoot->left->left->left = new BinaryTree<int>(1);
    pRoot->left->left->right = new BinaryTree<int>(3);
    pRoot->right = new BinaryTree<int>(7);
    pRoot->right->right = new BinaryTree<int>(8);
    return pRoot;
}


void buildFullBinaryTree(BinaryTree<int>* pHead, int level, int limit)
{
    if (level == limit)
        return;
    pHead->left = new BinaryTree<int>(pHead->data*2);
    pHead->right = new BinaryTree<int>(pHead->data*2+1);
    buildFullBinaryTree(pHead->left, level+1, limit);
    buildFullBinaryTree(pHead->right, level+1, limit);
}
