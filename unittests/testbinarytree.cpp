#include <iostream>

#include "testbinarytree.h"

#include "utils/SampleBinaryTrees.h"
#include "utils/BinaryTreePrettyPrint.h"
#include <iterator>
#include <vector>
#include <algorithm>
#include <assert.h>
#include "utils/Utils.h"

using namespace std;

void testBinaryTree()
{
    {
        BinaryTree<int>* pNode = buildPreorderBinaryTree();
        //printPretty(pNode, 0, 1, cout);
        vector<int> vec;
        pNode->traverse(pNode, BinaryTree<int>::ePreOrder, vec);
        assert(is_sorted(vec.begin(), vec.end()));
    }
    {
        BinaryTree<int>* pNode = buildPostorderBinaryTree();
        //printPretty(pNode, 0, 1, cout);
        vector<int> vec;
        pNode->traverse(pNode, BinaryTree<int>::ePostOrder, vec);
        assert(is_sorted(vec.begin(), vec.end()));
    }
    {
        BinaryTree<int>* pNode = buildInorderBinaryTree();
        //printPretty(pNode, 0, 1, cout);
        vector<int> vec;
        pNode->traverse(pNode, BinaryTree<int>::eInOrder, vec);
        assert(is_sorted(vec.begin(), vec.end()));
    }

    cout << "binary tree tested!" << endl;
}
