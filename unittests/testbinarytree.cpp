#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <assert.h>
#include <math.h>

#include "testbinarytree.h"

#include "lib/utils/Utils.h"
#include "lib/utils/SampleBinaryTrees.h"

using namespace std;

void testPreOrderTraversal()
{
    BinaryTree<int>* pNode = buildPreOrderBinaryTree();
    vector<int> vec;
    pNode->traverse(pNode, BinaryTree<int>::ePreOrder, vec);
    assert(is_sorted(vec.begin(), vec.end()));
}

void testPostOrderTraversal()
{
    BinaryTree<int>* pNode = buildPostOrderBinaryTree();
    vector<int> vec;
    pNode->traverse(pNode, BinaryTree<int>::ePostOrder, vec);
    assert(is_sorted(vec.begin(), vec.end()));
}

void testInOrderTraversal()
{
    BinaryTree<int>* pNode = buildInOrderBinaryTree();
    vector<int> vec;
    pNode->traverse(pNode, BinaryTree<int>::eInOrder, vec);
    assert(is_sorted(vec.begin(), vec.end()));
}

void testFullBinaryTreeBasicProperties()
{
    BinaryTree<int>* pFull = new BinaryTree<int>(1);
    buildFullBinaryTree(pFull, 1, 5);

    int maxDepth = BinaryTree<int>::maxDepth(pFull);
    int minDepth = BinaryTree<int>::minDepth(pFull);

    // full trees should have same min and max depth
    assert(minDepth == maxDepth);

    int depth = maxDepth;
    int size = BinaryTree<int>::size(pFull);

    // size of the tree should be (2**k)-1
    assert(size == pow(2, depth)-1);
}

void testFind()
{
    BinaryTree<int>* pFull = new BinaryTree<int>(1);
    buildFullBinaryTree(pFull, 1, 5);

    int size = BinaryTree<int>::size(pFull);

    for (int i = 1; i < size; i++)
    {
        BinaryTree<int>* pFound = pFull->find(i);
        assert(pFound);
        assert(pFound->data == i);
    }
}

void testBinaryTree()
{
    testPreOrderTraversal();
    testPostOrderTraversal();
    testInOrderTraversal();
    testFullBinaryTreeBasicProperties();
    testFind();

    cout << "binary tree tested!" << endl;
}
