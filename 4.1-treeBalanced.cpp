#include <iostream>
#include "binarytree.h"

#include "binaryTreePrettyPrint.h"

using namespace std;

void treeInsert(BinaryTree *&root, int newItem)
{
    if (!root)
        root = new BinaryTree(newItem);
    else if (newItem < root->data)
        treeInsert(root->left, newItem);
    else
        treeInsert(root->right, newItem);
}

int testTree()
{
    BinaryTree* root = 0;

    int values[] = {30, 20, 40, 35, 50, 41, 20, 10, 25, 5, 15, 42, 43};

    for (int i = 0; i < 13; i++)
        treeInsert(root, values[i]);

    printPretty(root, 1, 0, cout);
}
