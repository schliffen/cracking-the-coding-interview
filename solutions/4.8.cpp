#include <iostream>
#include <string>

using namespace std;

#include "4.8.h"
#include "utils/SampleBinaryTrees.h"
#include "utils/Utils.h"
#include "utils/BinaryTreePrettyPrint.h"

// 4.8 You have two very large binary trees: Tl, with millions of nodes,
// and T2, with hundreds of nodes. Create an algorithm to decide ifT2
// is a subtree of Tl. A tree T2 is a subtree of Tl if there exists a
// node n in Tl such that the subtree of n is identical to T2. That is,
// if you cut off the tree at node n, the two trees would be identical.

void test4_8()
{
    BinaryTree<string> *pRoot = new BinaryTree<string>(newUUID());
    int count = 1;
    buildRandomUUIDBinaryTree(pRoot, count, 1000000);
    cout << "num nodes " << pRoot->size(pRoot) << endl;
    cout << "min depth " << pRoot->maxDepth(pRoot) << endl;
}
