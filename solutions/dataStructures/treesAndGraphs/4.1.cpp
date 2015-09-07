#include <iostream>
#include <assert.h>
#include <cstdio>
#include "datastructures/BinaryTree.h"
#include "utils/BinaryTreePrettyPrint.h"

/*
    4.1 Implement a function to check if a binary tree is balanced.
    For the purposes of this question, a balanced tree is defined
    to be a tree such that the heights of the two subtrees of any
    node never differ by more than one.
*/

using namespace std;

void treeInsert(BinaryTree<int> *&root, int newItem)
{
    if (!root)
        root = new BinaryTree<int>(newItem);
    else if (newItem < root->data)
        treeInsert(root->left, newItem);
    else
        treeInsert(root->right, newItem);
}

void buildTree(BinaryTree<int> *&root)
{
    int values[] = {30, 20, 40, 35, 50, 41, 22, 10, 25, 5, 15, 55, 36, 34, 21};

    for (int i = 0; i < 15; i++)
        treeInsert(root, values[i]);

}

int minDepth(BinaryTree<int> *root)
{
    if (!root)
        return 0;
    return 1 + min(minDepth(root->left), minDepth(root->right));
}

int maxDepth(BinaryTree<int> *root)
{
    if (!root)
        return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

bool isBalanced(BinaryTree<int> *root)
{
    return (maxDepth(root) - minDepth(root) < 1);
}

void test4_1()
{
    BinaryTree<int>* root = 0;

    buildTree(root);
    //printPretty(root, 1, 0, cout);
    assert(isBalanced(root));
    cout << "4.1 passed!" << endl;
}
