#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#include "4.8.h"
#include "utils/SampleBinaryTrees.h"
#include "utils/Utils.h"
#include "utils/BinaryTreePrettyPrint.h"
#include "BinaryTreeRenderer.h"

// 4.8 You have two very large binary trees: Tl, with millions of nodes,
// and T2, with hundreds of nodes. Create an algorithm to decide ifT2
// is a subtree of Tl. A tree T2 is a subtree of Tl if there exists a
// node n in Tl such that the subtree of n is identical to T2. That is,
// if you cut off the tree at node n, the two trees would be identical.

string newID()
{
    static int count = 0;
    return SSTR(count++);
}

void test4_8()
{
    idFunc idF = &newID;

    BinaryTree<string> *pRoot = new BinaryTree<string>((*idF)());
    int count = 1;

    buildRandomBinaryTree(pRoot, count, 2000, idF);
    cout << "num nodes " << pRoot->size(pRoot) << endl;
    cout << "min depth " << pRoot->maxDepth(pRoot) << endl;

    FILE* pStream = fopen("randomBinaryTree.dot", "w");

    bst_print_dot(pRoot, pStream);
}
