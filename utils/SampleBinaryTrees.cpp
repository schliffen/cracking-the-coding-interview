#include <assert.h>
#include <time.h>
#include <math.h>

#include "SampleBinaryTrees.h"
#include "Utils.h"

using namespace std;

BinaryTree<int> *buildPreOrderBinaryTree()
{
    BinaryTree<int> *pRoot = new BinaryTree<int>(1);
    pRoot->left = new BinaryTree<int>(2);
    pRoot->left->right = new BinaryTree<int>(6);
    pRoot->left->left = new BinaryTree<int>(3);
    pRoot->left->left->left = new BinaryTree<int>(4);
    pRoot->left->left->right = new BinaryTree<int>(5);
    pRoot->right = new BinaryTree<int>(7);
    pRoot->right->right = new BinaryTree<int>(8);
    return pRoot;
}

BinaryTree<int> *buildPostOrderBinaryTree()
{
    BinaryTree<int> *pRoot = new BinaryTree<int>(8);
    pRoot->left = new BinaryTree<int>(5);
    pRoot->left->right = new BinaryTree<int>(4);
    pRoot->left->left = new BinaryTree<int>(3);
    pRoot->left->left->left = new BinaryTree<int>(1);
    pRoot->left->left->right = new BinaryTree<int>(2);
    pRoot->right = new BinaryTree<int>(7);
    pRoot->right->right = new BinaryTree<int>(6);
    return pRoot;
}

BinaryTree<int> *buildInOrderBinaryTree()
{
    BinaryTree<int> *pRoot = new BinaryTree<int>(6);
    pRoot->left = new BinaryTree<int>(4);
    pRoot->left->right = new BinaryTree<int>(5);
    pRoot->left->left = new BinaryTree<int>(2);
    pRoot->left->left->left = new BinaryTree<int>(1);
    pRoot->left->left->right = new BinaryTree<int>(3);
    pRoot->right = new BinaryTree<int>(7);
    pRoot->right->right = new BinaryTree<int>(8);
    return pRoot;
}


void buildFullBinaryTree(BinaryTree<int>* pHead, int level, int limit)
{
    if (level == limit)
        return;
    pHead->left = new BinaryTree<int>(pHead->data*2);
    pHead->right = new BinaryTree<int>(pHead->data*2+1);
    buildFullBinaryTree(pHead->left, level+1, limit);
    buildFullBinaryTree(pHead->right, level+1, limit);
}

BinaryTree<string>* getRandomNodeWithFreeSpace(BinaryTree<string>* pRoot, int randLeafDepth, int currentDepth)
{
    assert(pRoot);

    switch(pRoot->getNumChildren())
    {
    // this is a leaf, we cannot continue, so returning it
    case 0:
        return pRoot;
    // we have one leaf, continue as long as we're not over the maximum depth we've allowed ourselves
    case 1:
        if (currentDepth >= randLeafDepth)
        {
            return pRoot;
        }
        else
        {
            BinaryTree<string>* pLeaf = getRandomNodeWithFreeSpace(pRoot->left ? pRoot->left : pRoot->right, randLeafDepth, currentDepth + 1);
            return pLeaf;
        }
    // node is full, we have have no space so let's keep on exploring
    case 2:
            int direction = rand() % 2;
            BinaryTree<string>* pLeaf = getRandomNodeWithFreeSpace(direction ? pRoot->left : pRoot->right, randLeafDepth, currentDepth + 1);
            return pLeaf;
    }
    assert(false); // should not reach
    return 0; // suppress compiler warning
}

void buildRandomBinaryTree(BinaryTree<std::string>* pRoot, int limit, idFunc idFunc)
{
    srand (time(NULL));

    // the max depth of a full tree is
    int maxDepth = log2(limit + 1);
    int count = 1;

    while (count < limit)
    {
        int randLeafDepth = rand() % maxDepth*2;
        BinaryTree<std::string>* pLeaf = getRandomNodeWithFreeSpace(pRoot, randLeafDepth);

        // r of 0 means both children get created
        // r of 1 means only the left child gets created
        // r of 2 means only the right child gets created
        int r = 0;

        // r of 3 means no children get created
        // only use if the count is greater than 1, so we don't end up with
        // an empty tree, and only use sparingly
        if (count > 1)
            r += int((rand() % 11) / 10.0);

        switch(pLeaf->getNumChildren())
        {
        case 0:
            switch(r)
            {
            case 0:
                pLeaf->left = new BinaryTree<std::string>((*idFunc)());
                count += 1;
                if (count < limit)
                {
                    pLeaf->right = new BinaryTree<std::string>((*idFunc)());
                    count += 1;
                }
                break;
            case 1:
                pLeaf->left = new BinaryTree<std::string>((*idFunc)());
                count += 1;
                break;
            case 2:
                pLeaf->right = new BinaryTree<std::string>((*idFunc)());
                count += 1;
                break;
            case 4:
                // end of the road for this node
                break;
            }
        case 1:
            switch(r)
            {
            case 0:
                // can't have 2 nodes with only 1 space left, doing nothing
                break;
            case 1:
                if (!pLeaf->left)
                {
                    pLeaf->left = new BinaryTree<std::string>((*idFunc)());
                    count += 1;
                }
                break;
            case 2:
                if (!pLeaf->right)
                {
                    pLeaf->right = new BinaryTree<std::string>((*idFunc)());
                    count += 1;
                }
                break;
            case 3:
                // end of the road for this node
                break;
            }
        }
    }
    assert(pRoot->size(pRoot) == limit);
}
