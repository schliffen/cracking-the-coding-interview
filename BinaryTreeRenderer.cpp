#include "BinaryTreeRenderer.h"

void bst_print_dot_null(int data, int nullcount, FILE* stream)
{
    fprintf(stream, "    null%d [shape=point];\n", nullcount);
    fprintf(stream, "    %d -> null%d;\n", data, nullcount);
}

void bst_print_dot_aux(BinaryTree<int> *node, FILE* stream)
{
    static int nullcount = 0;

    if (node->left)
    {
        fprintf(stream, "    %d -> %d;\n", node->data, node->left->data);
        bst_print_dot_aux(node->left, stream);
    }
    else
        bst_print_dot_null(node->data, nullcount++, stream);

    if (node->right)
    {
        fprintf(stream, "    %d -> %d;\n", node->data, node->right->data);
        bst_print_dot_aux(node->right, stream);
    }
    else
        bst_print_dot_null(node->data, nullcount++, stream);
}

void bst_print_dot(BinaryTree<int> *tree, FILE* stream)
{
    fprintf(stream, "digraph BST {\n");
    fprintf(stream, "    node [fontname=\"Arial\"];\n");

    if (!tree)
        fprintf(stream, "\n");
    else if (!tree->right && !tree->left)
        fprintf(stream, "    %d;\n", tree->data);
    else
        bst_print_dot_aux(tree, stream);

    fprintf(stream, "}\n");
}
