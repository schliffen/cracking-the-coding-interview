#ifndef BINARYTREERENDERER_H
#define BINARYTREERENDERER_H

#include "datastructures/BinaryTree.h"

void bst_print_dot_null(int key, int nullcount, FILE* stream);
void bst_print_dot_aux(BinaryTree<int>* node, FILE* stream);
void bst_print_dot(BinaryTree<int>* tree, FILE* stream);

#endif // BINARYTREERENDERER_H
