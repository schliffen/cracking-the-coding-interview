#include "BinaryTreeRenderer.h"

void renderBinaryTree_null(int data, int nullcount, FILE* stream)
{
    fprintf(stream, "    null%d [shape=point];\n", nullcount);
    fprintf(stream, "    %d -> null%d;\n", data, nullcount);
}

void renderBinaryTree_aux(BinaryTree<int> *node, FILE* stream)
{
    static int nullcount = 0;

    if (node->left)
    {
        fprintf(stream, "    %d -> %d;\n", node->data, node->left->data);
        renderBinaryTree_aux(node->left, stream);
    }
    else
        renderBinaryTree_null(node->data, nullcount++, stream);

    if (node->right)
    {
        fprintf(stream, "    %d -> %d;\n", node->data, node->right->data);
        renderBinaryTree_aux(node->right, stream);
    }
    else
        renderBinaryTree_null(node->data, nullcount++, stream);
}

void renderBinaryTree(BinaryTree<int> *tree, string name)
{
    FILE* stream = fopen((name + ".dot").c_str(), "w");

    fprintf(stream, "digraph BST {\n");
    fprintf(stream, "    node [fontname=\"Arial\"];\n");

    if (!tree)
        fprintf(stream, "\n");
    else if (!tree->right && !tree->left)
        fprintf(stream, "    %d;\n", tree->data);
    else
        renderBinaryTree_aux(tree, stream);

    fprintf(stream, "}\n");
    fclose(stream);
    const char* sysCmd = string("/opt/local/bin/dot -Tpng " + name + ".dot -o " + name + ".png &> /dev/null").c_str();
    system(sysCmd);
}


void renderBinaryTree_null(std::string data, int nullcount, FILE* stream)
{
    fprintf(stream, "    null%d [shape=point];\n", nullcount);
    fprintf(stream, "    %s -> null%d;\n", data.c_str(), nullcount);
}

void renderBinaryTree_aux(BinaryTree<std::string> *node, FILE* stream)
{
    static int nullcount = 0;

    if (node->left)
    {
        fprintf(stream, "    %s -> %s;\n", node->data.c_str(), node->left->data.c_str());
        renderBinaryTree_aux(node->left, stream);
    }
    else
        renderBinaryTree_null(node->data, nullcount++, stream);

    if (node->right)
    {
        fprintf(stream, "    %s -> %s\n", node->data.c_str(), node->right->data.c_str());
        renderBinaryTree_aux(node->right, stream);
    }
    else
        renderBinaryTree_null(node->data, nullcount++, stream);
}

void renderBinaryTree(BinaryTree<std::string> *tree, std::string name)
{
    FILE* stream = fopen((name + ".dot").c_str(), "w");

    fprintf(stream, "digraph BST {\n");
    fprintf(stream, "    node [fontname=\"Arial\"];\n");

    if (!tree)
        fprintf(stream, "\n");
    else if (!tree->right && !tree->left)
        fprintf(stream, "    %s;\n", tree->data.c_str());
    else
        renderBinaryTree_aux(tree, stream);

    fprintf(stream, "}\n");
    fclose(stream);
    const char* sysCmd = string("/opt/local/bin/dot -Tpng " + name + ".dot -o " + name + ".png &> /dev/null").c_str();
    system(sysCmd);
}
