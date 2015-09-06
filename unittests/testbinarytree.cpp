#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <assert.h>
#include <math.h>

#include "testbinarytree.h"

#include "utils/Utils.h"
#include "utils/SampleBinaryTrees.h"
#include "utils/BinaryTreePrettyPrint.h"

using namespace std;

void testPreOrderTraversal()
{
    BinaryTree<int>* pNode = buildPreOrderBinaryTree();
    //printPretty(pNode, 0, 1, cout);
    vector<int> vec;
    pNode->traverse(pNode, BinaryTree<int>::ePreOrder, vec);
    assert(is_sorted(vec.begin(), vec.end()));
}

void testPostOrderTraversal()
{
    BinaryTree<int>* pNode = buildPostOrderBinaryTree();
    //printPretty(pNode, 0, 1, cout);
    vector<int> vec;
    pNode->traverse(pNode, BinaryTree<int>::ePostOrder, vec);
    assert(is_sorted(vec.begin(), vec.end()));
}

void testInOrderTraversal()
{
    BinaryTree<int>* pNode = buildInOrderBinaryTree();
    //printPretty(pNode, 0, 1, cout);
    vector<int> vec;
    pNode->traverse(pNode, BinaryTree<int>::eInOrder, vec);
    assert(is_sorted(vec.begin(), vec.end()));
}

void testFullBinaryTreeBasicProperties()
{
    BinaryTree<int>* pFull = new BinaryTree<int>(1);
    buildFullBinaryTree(pFull, 1, 5);
    //printPretty(pFull, 1, 4, cout);

    int maxDepth = BinaryTree<int>::maxDepth(pFull);
    int minDepth = BinaryTree<int>::minDepth(pFull);

    // full trees should have same min and max depth
    assert(minDepth == maxDepth);

    int depth = maxDepth;
    int size = BinaryTree<int>::size(pFull);

    // size of the tree should be (2**k)-1
    assert(size == pow(2, depth)-1);
}

void testBinaryTree()
{
    testPreOrderTraversal();
    testPostOrderTraversal();
    testInOrderTraversal();
    testFullBinaryTreeBasicProperties();

    cout << "binary tree tested!" << endl;
}
