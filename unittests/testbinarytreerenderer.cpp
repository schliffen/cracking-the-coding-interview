#include <assert.h>
#include <sys/stat.h>

#include "testhelper.h"

#include "testbinarytreerenderer.h"

#include "lib/utils/Utils.h"
#include "lib/utils/SampleBinaryTrees.h"
#include "lib/utils/BinaryTreeRenderer.h"

#include <string>

using namespace std;

void testIntBinaryTreeRendererMain()
{
    BinaryTree<int>* pFull = new BinaryTree<int>(1);
    buildFullBinaryTree(pFull, 1, 4);

    renderBinaryTree(pFull, "binaryTreeInt");
    struct stat buffer;
    assert(stat ("binaryTreeInt.dot", &buffer) == 0);
}

void testStringBinaryTreeRendererMain()
{
    BinaryTree<string>* pTree = new BinaryTree<string>("A");
    pTree->left = new BinaryTree<string>("A");
    pTree->left->left = new BinaryTree<string>("A");

    renderBinaryTree(pTree, "binaryTreeStr");
    struct stat buffer;
    assert(stat ("binaryTreeStr.dot", &buffer) == 0);
}

START_TEST(testBinaryTreeRenderer)
TEST(testIntBinaryTreeRendererMain)
TEST(testStringBinaryTreeRendererMain)
END_TEST
