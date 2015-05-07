#ifndef BINARYTREE_H
#define BINARYTREE_H

struct BinaryTree {
  BinaryTree *left, *right;
  int data;
  BinaryTree(int val) : left(0), right(0), data(val) { }
};

#endif
