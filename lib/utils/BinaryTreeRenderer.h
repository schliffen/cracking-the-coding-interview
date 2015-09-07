#ifndef BINARYTREERENDERER_H
#define BINARYTREERENDERER_H

#include "lib/datastructures/BinaryTree.h"

void bst_print_dot_null(int key, int nullcount, FILE* stream);
void bst_print_dot_aux(BinaryTree<int>* node, FILE* stream);
void bst_print_dot(BinaryTree<int>* tree, FILE* stream);


void bst_print_dot_null(std::string key, int nullcount, FILE* stream);
void bst_print_dot_aux(BinaryTree<std::string>* node, FILE* stream);
void bst_print_dot(BinaryTree<std::string>* tree, FILE* stream);

#endif // BINARYTREERENDERER_H
