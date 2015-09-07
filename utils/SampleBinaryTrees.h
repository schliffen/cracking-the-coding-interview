#ifndef SAMPLEBINARYTREES_H
#define SAMPLEBINARYTREES_H

#include "datastructures/BinaryTree.h"
#include <string>

typedef std::string(*idFunc)();

BinaryTree<int> *buildPreOrderBinaryTree();
BinaryTree<int> *buildPostOrderBinaryTree();
BinaryTree<int> *buildInOrderBinaryTree();
void buildFullBinaryTree(BinaryTree<int>* pHead, int level, int limit);
BinaryTree<string>* getRandomNodeWithFreeSpace(BinaryTree<string>* pRoot, int randLeafDepth, int currentDepth = 0);
void buildRandomBinaryTree(BinaryTree<string> *pRoot, int limit, idFunc idFunc);

#endif // SAMPLEBINARYTREES_H
