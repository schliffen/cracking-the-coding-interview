#include "SampleBinaryTrees.h"

using namespace std;

BinaryTree<string> *buildPreorderAlphabetBinaryTree()
{
    BinaryTree<string> *pRoot = new BinaryTree<string>("a");
    pRoot->left = new BinaryTree<string>("b");
    pRoot->left->right = new BinaryTree<string>("f");
    pRoot->left->left = new BinaryTree<string>("c");
    pRoot->left->left->left = new BinaryTree<string>("d");
    pRoot->left->left->right = new BinaryTree<string>("e");
    pRoot->right = new BinaryTree<string>("g");
    pRoot->right->right = new BinaryTree<string>("h");
    return pRoot;
}
