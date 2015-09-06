#ifndef SAMPLEBINARYTREES_H
#define SAMPLEBINARYTREES_H

#include "datastructures/BinaryTree.h"
#include <string>

BinaryTree<int> *buildPreOrderBinaryTree();
BinaryTree<int> *buildPostOrderBinaryTree();
BinaryTree<int> *buildInOrderBinaryTree();
void buildFullBinaryTree(BinaryTree<int>* pHead, int level, int limit);

#endif // SAMPLEBINARYTREES_H
