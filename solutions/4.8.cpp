#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <assert.h>

using namespace std;

#include "4.8.h"
#include "utils/SampleBinaryTrees.h"
#include "utils/Utils.h"
#include "utils/BinaryTreePrettyPrint.h"
#include "BinaryTreeRenderer.h"

// 4.8 You have two very large binary trees: Tl, with millions of nodes,
// and T2, with hundreds of nodes. Create an algorithm to decide ifT2
// is a subtree of Tl. A tree T2 is a subtree of Tl if there exists a
// node n in Tl such that the subtree of n is identical to T2. That is,
// if you cut off the tree at node n, the two trees would be identical.

string newID()
{
    static int count = 0;
    return SSTR(count++);
}

bool isSubArray(const vector<string>& aArray, const vector<string>& bSubArray, int& matchedIndex);

void test4_8()
{
    idFunc idF = &newUUID;

    int T1Size = 2e6;
    int T2Size = 200;

    // build random binary tree with 2 million nodes
    BinaryTree<string> *T1 = new BinaryTree<string>((*idF)());
    buildRandomBinaryTree(T1, T1Size, idF);

    // build random binary tree with 2 hundred nodes
    BinaryTree<string> *T2 = new BinaryTree<string>((*idF)());
    buildRandomBinaryTree(T2, T2Size, idF);

    // compute max depth of T1
    int maxDepth = log2(T1Size + 1);

    // find a random free node on T1
    BinaryTree<string>* pT1RandLeaf = getRandomNodeWithFreeSpace(T1, maxDepth);

    // graft T2 onto T1
    if (!pT1RandLeaf->left)
        pT1RandLeaf->left = T2;
    else if (!pT1RandLeaf->right)
        pT1RandLeaf->right = T2;

    // make sure that the size of our new tree is the size of the two combined trees
    assert(T1->size(T1) == (T1Size + T2Size));

    // do preorder traveral of T1, and place results in array
    vector<string> T1Values;
    T1->traverse(T1, BinaryTree<string>::ePreOrder, T1Values);

    // do preorder traveral of T2, and place results in array
    vector<string> T2Values;
    T2->traverse(T2, BinaryTree<string>::ePreOrder, T2Values);

    // check whether T2's traversed array is a subarray of T1's traversed subarray
    int startIndex = -1;
    bool foundSubArray = isSubArray(T1Values, T2Values, startIndex);

    // if so, we have successfully found the subtree, at index: startIndex
    if (foundSubArray)
        cout << "4.8 passed!" << endl;
    else
        cout << "4.8 NOT passed!" << endl;
}

bool isSubArray(const vector<string>& aArray, const vector<string>& bSubArray, int& matchedIndex)
{
    for (size_t i = 0; i < aArray.size(); i++)
    {
        int firstMatchIndex = -1;
        unsigned int numMatched = 0;
        for (size_t j = 0; j < bSubArray.size(); j++)
        {
            if (aArray[i] == bSubArray[j])
            {
                firstMatchIndex = i;
                for (size_t k = 0; k < bSubArray.size(); k++)
                {
                    if (aArray[i+k] == bSubArray[k])
                    {
                        numMatched++;
                        if (numMatched == bSubArray.size())
                        {
                            matchedIndex = firstMatchIndex;
                            return true;
                        }
                    }
                }
            }
            else
                numMatched = 0;
        }
    }
    return false;
}
