#include <assert.h>
#include <sys/stat.h>

#include "testhelper.h"

#include "testbinarytreerenderer.h"

#include "lib/utils/Utils.h"
#include "lib/utils/SampleBinaryTrees.h"
#include "lib/utils/BinaryTreeRenderer.h"

using namespace std;

void testBinaryTreeRendererMain()
{
    BinaryTree<int>* pFull = new BinaryTree<int>(1);
    buildFullBinaryTree(pFull, 1, 5);

    renderBinaryTree(pFull, "binaryTree");
    struct stat buffer;
    assert(stat ("binaryTree.dot", &buffer) == 0);
}

START_TEST(testBinaryTreeRenderer)
TEST(testBinaryTreeRendererMain)
END_TEST
