#include <iostream>
#include <sstream>
#include <math.h>
#include <assert.h>

#include "lib/SampleBinaryTrees.h"
#include "lib/Utils.h"
#include "lib/BinaryTreeRenderer.h"
#include "lib/string.h"
#include "lib/vector.h"

// 4.8 You have two very large binary trees: Tl, with millions of nodes,
// and T2, with hundreds of nodes. Create an algorithm to decide ifT2
// is a subtree of Tl. A tree T2 is a subtree of Tl if there exists a
// node n in Tl such that the subtree of n is identical to T2. That is,
// if you cut off the tree at node n, the two trees would be identical.

bool isSubArray(const ctci::vector<ctci::string>& aArray, const ctci::vector<ctci::string>& bSubArray, int& matchedIndex);

// check whether two trees are identical
bool doTreesMatch(BinaryTree<ctci::string>* pA, BinaryTree<ctci::string>* pB) {
    // two null nodes, that matches
    if (!pA && !pB)
        return true;

    // one or the other is null, no match
    if (!((bool)pA & (bool)pB))
        return false;

    // if data matches
    if (pA->data == pB->data) {
        // recurse
        return  doTreesMatch(pA->left, pB->left) &&
                doTreesMatch(pA->right, pB->right);
    }

    return false;
}

// find binary tree T2 within binary tree T1
BinaryTree<ctci::string>* findSubtree(BinaryTree<ctci::string>* T1, BinaryTree<ctci::string>* T2) {
    if (!T1)
        return 0;

    // pre order
    // we've that T2's root data matches T1's
    if (T1->data == T2->data)
        // so try matching these two subtrees
        if (doTreesMatch(T1, T2))
            return T2;

    // recurse to the left
    BinaryTree<ctci::string>* foundLeft = findSubtree(T1->left, T2);

    // if found, then return
    if (foundLeft)
        return foundLeft;

    // recurse to the right
    BinaryTree<ctci::string>* foundRight = findSubtree(T1->right, T2);

    // if found, then return
    if (foundRight)
        return foundRight;

    return 0;
}

void buildTrees(int T1Size, int T2Size, BinaryTree<ctci::string>*& T1, BinaryTree<ctci::string>*& T2) {
    // build random binary tree with lots of nodes
    buildRandomBinaryTree<ctci::string, sidFunc>(T1, T1Size, &snewUUID);

    // build random binary tree with less nodes
    buildRandomBinaryTree<ctci::string, sidFunc>(T2, T2Size, &snewUUID);

    // compute max depth of T1
    int maxDepth = log2(T1Size + 1);

    // find a random free node on T1
    BinaryTree<ctci::string>* pT1RandLeaf = getRandomNodeWithFreeSpace(T1, maxDepth);

    // graft T2 onto T1
    if (!pT1RandLeaf->left)
        pT1RandLeaf->left = T2;
    else if (!pT1RandLeaf->right)
        pT1RandLeaf->right = T2;

    // make sure that the size of our new tree is the size of the two combined trees
    assert(T1->size(T1) == (T1Size + T2Size));
}

bool variation1(BinaryTree<ctci::string>* T2, BinaryTree<ctci::string>* T1) {
    // do preorder traveral of T1, and place results in array
    ctci::vector<ctci::string> T1Values;
    //T1Values.setReallocatable(true);
    T1->traverse(T1, BinaryTree<ctci::string>::ePreOrder, T1Values, true);

    // do preorder traveral of T2, and place results in array
    ctci::vector<ctci::string> T2Values;
   // T2Values.setReallocatable(true);
    T2->traverse(T2, BinaryTree<ctci::string>::ePreOrder, T2Values, true);

    // check whether T2's traversed array is a subarray of T1's traversed subarray
    int startIndex = -1;
    bool foundSubArray = isSubArray(T1Values, T2Values, startIndex);

    // if foundSubArray is true, then we've found our subtree in the T1,
    // and its position preOrder position in the tree is startIndex
    return foundSubArray;
}

BinaryTree<ctci::string>* variation2(BinaryTree<ctci::string>* T1, BinaryTree<ctci::string>* T2) {
    return findSubtree(T1, T2);
}

void test4_8() {
    int T1Size = 2e5; // set this to 2e6 for "millions" of nodes in T1
    int T2Size = 200;

    BinaryTree<ctci::string>* T1 = 0, *T2 = 0;

    buildTrees(T1Size, T2Size, T1, T2);

    bool isSubtree = variation1(T2, T1);

    BinaryTree<ctci::string>* pFoundSubtree = variation2(T1, T2);

    delete T1;

    if (isSubtree && pFoundSubtree)
        cout << "4.8 passed!" << endl;
    else
        cout << "4.8 NOT passed!" << endl;
}

bool isSubArray(const ctci::vector<ctci::string>& aArray, const ctci::vector<ctci::string>& bSubArray, int& matchedIndex) {
    for (size_t i = 0; i < aArray.size(); i++) {
        int firstMatchIndex = -1;
        unsigned int numMatched = 0;
        for (size_t j = 0; j < bSubArray.size(); j++) {
            if (aArray[i] == bSubArray[j]) {
                firstMatchIndex = i;
                for (size_t k = 0; k < bSubArray.size(); k++) {
                    if (aArray[i + k] == bSubArray[k]) {
                        numMatched++;
                        if (numMatched == bSubArray.size()) {
                            matchedIndex = firstMatchIndex;
                            return true;
                        }
                    }
                }
            } else
                numMatched = 0;
        }
    }
    return false;
}
