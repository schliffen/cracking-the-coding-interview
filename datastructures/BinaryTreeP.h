#ifndef BINARYTREEP_H
#define BINARYTREEP_H

// a binary tree, with a link to its parent

class BinaryTreeP
{
public:
    BinaryTreeP(int val);

    static BinaryTreeP* createMinimalBST(int array[], int start, int end)
    {
        if (end < start)
            return 0;
        int mid = (start + end) / 2;
        BinaryTreeP* pNode = new BinaryTreeP(array[mid]);
        pNode->left = createMinimalBST(array, start, mid-1);
        if (pNode->left)
            pNode->left->parent = pNode;
        pNode->right = createMinimalBST(array, mid+1, end);
        if (pNode->right)
            pNode->right->parent = pNode;
        return pNode;
    }

    BinaryTreeP* parent;
    BinaryTreeP* left;
    BinaryTreeP* right;
    int data;
};

#endif // BINARYTREEP_H
