#include <iostream>
#include <vector>

using namespace std;

#include "4.9.h"

#include "lib/datastructures/BinaryTree.h"
#include "lib/utils/SampleBinaryTrees.h"


// 4.9 You are given a binary tree in which each node contains a value.
// Design an algorithm to print all paths which sum to a given value.
// The path does not need to start or end at the root or a leaf.



// function to create the data in the binary tree.
// data in the nodes will only ever be between 0 and 19
// this way we'll have many paths that add up to the given
// value, as long as the value remains quite low
int newID()
{
    static int count = -10;
    if (count >= 20)
        count = 0;
    return count++;
}

// Main recursive function to find paths that add up to the given value
int findPathsWithValue(BinaryTree<int>*pRoot, vector<int>path, int value)
{
    if (!pRoot)
        return 0;

    int pathsFound = 0;

    int sum = 0;

    // for all the nodes from the start to the end of the path we've taken
    for (int i = path.size()-1; i >= 0; i--)
    {
        // sum up the values
        sum += path[i];

        // if the sum matches the value
        if (sum == value)
        {
            pathsFound++;

            // print it in reverse
            // (uncomment cout)
            for (int j = path.size()-1; j >= i; j--)
            {
                // cout << path[j] << "  ";
            }
            // cout << endl;
        }
    }
    // add the current node's data onto the path
    path.push_back(pRoot->data);

    // recurse
    pathsFound += findPathsWithValue(pRoot->left, path, value);
    pathsFound += findPathsWithValue(pRoot->right, path, value);

    return pathsFound;
}


void test4_9()
{
    idFunci idF = &newID;

    // build our random binary tree
    BinaryTree<int>* pRoot = new BinaryTree<int>((*idF)());
    buildRandomBinaryTree(pRoot, 20000, idF);

    // call our recursive sum finding function
    vector<int> paths;
    int value = 26;
    int pathsFound = findPathsWithValue(pRoot, paths, value);

    if (pathsFound > 0)
        cout << "4.9 passed!" << endl;
    else
        cout << "4.9 NOT passed!" << endl;
}
