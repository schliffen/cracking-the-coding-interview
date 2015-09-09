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

    static bool isBST(BinaryTree<T>* pRoot);

    bool isLeaf() const;

    bool nodeIsFull() const;

    int getNumChildren() const;

    static void preOrder(BinaryTree<T>* pNode);

    static void inOrder(BinaryTree<T>* pNode);

    static void postOrder(BinaryTree<T>* pNode);

    static void traverse(BinaryTree<T>* pNode, TraversalOrder order);

    static void traverse(BinaryTree<T>* pNode, TraversalOrder order, std::vector<T>& vec, bool keepNull = false);

    static int size(BinaryTree<T>* pNode);

    static int minDepth(BinaryTree<T> *root);

    static int maxDepth(BinaryTree<T> *root);

    static bool isBalanced(BinaryTree<T> *root);

    BinaryTree<T>* find(T);

    BinaryTree<T> *left, *right;
    T data;
};

template<class T>
class BinaryTreeP: public BinaryTree<T>
{
    BinaryTreeP(T val, BinaryTreeP<T>* pParent = 0):
        left(0),
        right(0),
        data(val),
        parent(pParent)
    {
    }

    BinaryTreeP<T> *left, *right;
    T data;
    BinaryTreeP<T> *parent;
};

#include "BinaryTree.hpp"

#endif
