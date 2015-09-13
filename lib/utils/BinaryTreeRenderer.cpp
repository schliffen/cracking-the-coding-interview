#include "BinaryTreeRenderer.h"

void renderBinaryTree_null(int data, int nullcount, FILE* stream)
{
    fprintf(stream, "    null%d [shape=point];\n", nullcount);
    fprintf(stream, "    %d -> null%d;\n", data, nullcount);
}

void renderBinaryTree_aux(BinaryTreeBase<int> *node, FILE* stream)
{
    static int nullcount = 0;

    if (node->get_left())
    {
        fprintf(stream, "    %d -> %d;\n", node->get_data(), node->get_left()->get_data());
        renderBinaryTree_aux(node->get_left(), stream);
    }
    else
        renderBinaryTree_null(node->get_data(), nullcount++, stream);

    if (node->get_right())
    {
        fprintf(stream, "    %d -> %d;\n", node->get_data(), node->get_right()->get_data());
        renderBinaryTree_aux(node->get_right(), stream);
    }
    else
        renderBinaryTree_null(node->get_data(), nullcount++, stream);
}

void renderBinaryTree(BinaryTreeBase<int> *tree, string name)
{
    FILE* stream = fopen((name + ".dot").c_str(), "w");

    fprintf(stream, "digraph BST {\n");
    fprintf(stream, "    node [fontname=\"Arial\"];\n");

    if (!tree)
        fprintf(stream, "\n");
    else if (!tree->get_right() && !tree->get_left())
        fprintf(stream, "    %d;\n", tree->get_data());
    else
        renderBinaryTree_aux(tree, stream);

    fprintf(stream, "}\n");
    fclose(stream);
    string cmd = string("/opt/local/bin/dot -Tpng " + name + ".dot -o " + name + ".png &> /dev/null");
    const char* sysCmd = cmd.c_str();
    system(sysCmd);
}


void renderBinaryTree_null(BinaryTreeBase<std::string> *node, int nullcount, FILE* stream)
{
    fprintf(stream, "    \"%p\" [label=\"%s\"];\n", node, node->get_data().c_str());
    fprintf(stream, "    null%d [shape=point];\n", nullcount);
    fprintf(stream, "    \"%p\" -> null%d;\n", node, nullcount);
}

void renderBinaryTree_aux(BinaryTreeBase<std::string> *node, FILE* stream)
{
    static int nullcount = 0;

    fprintf(stream, "    \"%p\" [label=\"%s\"];\n", node, node->get_data().c_str());

    if (node->get_left())
    {
        fprintf(stream, "    \"%p\" -> \"%p\";\n", node, node->get_left());
        renderBinaryTree_aux(node->get_left(), stream);
    }
    /*else
        renderBinaryTree_null(node, nullcount++, stream);*/

    if (node->get_right())
    {
        fprintf(stream, "    \"%p\" -> \"%p\"\n", node, node->get_right());
        renderBinaryTree_aux(node->get_right(), stream);
    }
    /*else
        renderBinaryTree_null(node, nullcount++, stream);*/
}

void renderBinaryTree(BinaryTreeBase<string> *tree, std::string name)
{
    FILE* stream = fopen((name + ".dot").c_str(), "w");

    fprintf(stream, "digraph BST {\n");
    fprintf(stream, "    node [fontname=\"Arial\"];\n");

    if (!tree)
        fprintf(stream, "\n");
    else if (!tree->get_right() && !tree->get_left())
        fprintf(stream, "    \"%p\" [label=\"%s\"];\n", tree, tree->get_data().c_str());
    else
        renderBinaryTree_aux(tree, stream);

    fprintf(stream, "}\n");
    fclose(stream);
    const char* sysCmd = string("/opt/local/bin/dot -Tpng " + name + ".dot -o " + name + ".png > /dev/null").c_str();
    printf("%s\n", sysCmd);
    system(sysCmd);
}
