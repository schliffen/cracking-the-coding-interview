#include "testbinarytreerenderer.h"

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <assert.h>
#include <math.h>
#include <sys/stat.h>

#include "testbinarytree.h"

#include "lib/utils/Utils.h"
#include "lib/utils/SampleBinaryTrees.h"
#include "lib/utils/BinaryTreeRenderer.h"

using namespace std;

void testBinaryTreeRenderer()
{
    BinaryTree<int>* pFull = new BinaryTree<int>(1);
    buildFullBinaryTree(pFull, 1, 5);

    renderBinaryTree(pFull, "binaryTree");
    struct stat buffer;
    assert(stat ("binaryTree.dot", &buffer) == 0);
    cout << "binary tree renderer tested!" << endl;
}
