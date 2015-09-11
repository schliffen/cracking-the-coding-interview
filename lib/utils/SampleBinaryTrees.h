#include <assert.h>
#include <time.h>
#include <math.h>

#ifndef SAMPLEBINARYTREES_H
#define SAMPLEBINARYTREES_H

#include "lib/datastructures/BinaryTree.h"
#include "lib/datastructures/string.h"
#include <string>

typedef std::string(*idFunc)();
typedef ctci::string(*sidFunc)();
typedef int(*idFunci)();

BinaryTree<int> *buildPreOrderBinaryTree();
BinaryTree<int> *buildPostOrderBinaryTree();
BinaryTree<int> *buildInOrderBinaryTree();
void buildFullBinaryTree(BinaryTree<int>* pHead, int level, int limit);

template<class S>
BinaryTree<S>* getRandomNodeWithFreeSpace(BinaryTree<S>* pRoot, int randLeafDepth, int currentDepth = 0)
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
            BinaryTree<S>* pLeaf = getRandomNodeWithFreeSpace(pRoot->left ? pRoot->left : pRoot->right, randLeafDepth, currentDepth + 1);
            return pLeaf;
        }
    // node is full, we have have no space so let's keep on exploring
    case 2:
        int direction = rand() % 2;
        BinaryTree<S>* pLeaf = getRandomNodeWithFreeSpace(direction ? pRoot->left : pRoot->right, randLeafDepth, currentDepth + 1);
        return pLeaf;
    }
    assert(false); // should not reach
    return 0; // suppress compiler warning
}

template<class S, class T>
void buildRandomBinaryTree(BinaryTree<S> *&pRoot, int limit, T idFunc)
{
    if (!pRoot)
        pRoot = new BinaryTree<S>((*idFunc)());


    srand (time(NULL));

    // the max depth of a full tree is
    int maxDepth = log2(limit + 1);
    int count = 1;

    while (count < limit)
    {
        int randLeafDepth = rand() % maxDepth*2;
        BinaryTree<S>* pLeaf = getRandomNodeWithFreeSpace(pRoot, randLeafDepth);

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
                pLeaf->left = new BinaryTree<S>((*idFunc)());
                count += 1;
                if (count < limit)
                {
                    pLeaf->right = new BinaryTree<S>((*idFunc)());
                    count += 1;
                }
                break;
            case 1:
                pLeaf->left = new BinaryTree<S>((*idFunc)());
                count += 1;
                break;
            case 2:
                pLeaf->right = new BinaryTree<S>((*idFunc)());
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
                    pLeaf->left = new BinaryTree<S>((*idFunc)());
                    count += 1;
                }
                break;
            case 2:
                if (!pLeaf->right)
                {
                    pLeaf->right = new BinaryTree<S>((*idFunc)());
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

#endif // SAMPLEBINARYTREES_H
