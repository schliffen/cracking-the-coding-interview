#include "4.3.h"

#include "datastructures/BinaryTree.h"
#include "utils/BinaryTreePrettyPrint.h"

#include <iostream>
#include <assert.h>

using namespace std;

/*
 * 4.3 Given a sorted (increasing order) array with unique integer elements,
 * write an algorithm to create a binary search tree with minimal height.
 */

void test4_3()
{
    int array[] = {0,1,2,3,4,5,6,7,8};
    // please follow the createMinimalSTB function
    // to view the solution
    BinaryTree* pRoot = BinaryTree::createMinimalBST(array, 0, 8);
    //printPretty(pRoot, 1, 0, cout);
    assert(pRoot->data == 4);
    assert(pRoot->left->data == 1);
    assert(pRoot->right->data == 6);
    cout << "4.3 passed!" << endl;
}
