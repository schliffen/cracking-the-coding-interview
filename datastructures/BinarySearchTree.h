#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include <iostream>

using namespace std;

class BinarySearchTree
{
public:
    BinarySearchTree(int val):
        left(0),
        right(0),
        data(val)
    {

    }

    void preOrder(BinarySearchTree* pNode)
    {
        if (pNode == 0)
            return;
        cout << data << endl;
        preOrder(left);
        preOrder(right);
    }

    void inOrder(BinarySearchTree* pNode)
    {
        if (pNode == 0)
            return;
        preOrder(left);
        cout << data << endl;
        preOrder(right);
    }

    void postOrder(BinarySearchTree* pNode)
    {
        if (pNode == 0)
            return;
        preOrder(left);
        preOrder(right);
        cout << data << endl;
    }

    BinarySearchTree *left, *right;
    int data;
};

#endif // BINARYSEARCHTREE_H
