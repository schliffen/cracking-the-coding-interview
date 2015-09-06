#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
#include <vector>

using namespace std;

template<class T>
class BinaryTree
{
public:
    BinaryTree(T val);

    enum TraversalOrder
    {
        ePreOrder,
        ePostOrder,
        eInOrder
    };

    static BinaryTree<T>* createMinimalBST(T array[], int start, int end);

    static bool isBST(BinaryTree<T>* pRoot, BinaryTree<T>* pLeft, BinaryTree<T>* pRight);

    bool hasChildren() const;

    static void preOrder(BinaryTree<T>* pNode);

    static void inOrder(BinaryTree<T>* pNode);

    static void postOrder(BinaryTree<T>* pNode);

    static void traverse(BinaryTree<T>* pNode, TraversalOrder order);

    static void traverse(BinaryTree<T>* pNode, TraversalOrder order, std::vector<T>& vec);

    BinaryTree<T> *left, *right;
    T data;
};

#include "BinaryTree.hpp"

#endif
