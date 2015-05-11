#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>

using namespace std;

class BinaryTree
{
public:
  BinaryTree *left, *right;
  int data;
  BinaryTree(int val) : left(0), right(0), data(val) { }

  static BinaryTree* createMinimalBST(int array[], int start, int end)
  {
      if (end < start)
          return 0;
      int mid = (start + end) / 2;
      BinaryTree* pNode = new BinaryTree(array[mid]);
      pNode->left = createMinimalBST(array, start, mid-1);
      pNode->right = createMinimalBST(array, mid+1, end);
      return pNode;
  }

    static bool isBST(BinaryTree* pRoot, BinaryTree* pLeft, BinaryTree* pRight)
    {
        if (pLeft && pRight)
        {
            if (pLeft->data <= pRoot->data && pRoot->data <= pRight->data)
            {
                return isBST(pLeft, pLeft->left, pLeft->right);
            }
            else
            {
                return false;
            }
        }
        else if (pLeft && !pRight)
        {
            if (pLeft->data <= pRoot->data)
            {
                return isBST(pLeft, pLeft->left, 0);
            }
            else
            {
                return false;
            }
        }
        else if (!pLeft && pRight)
        {
            if (pRoot->data <= pRight->data)
            {
                return isBST(pRight, 0, pRight->right);
            }
            else
            {
                return false;
            }
        }

        return true;
    }

  bool hasChildren() const
  {
    return left || right;
  }

  void preOrder(BinaryTree* pNode)
  {
      if (pNode == 0)
          return;
      cout << data << endl;
      preOrder(left);
      preOrder(right);
  }

  void inOrder(BinaryTree* pNode)
  {
      if (pNode == 0)
          return;
      preOrder(left);
      cout << data << endl;
      preOrder(right);
  }

  void postOrder(BinaryTree* pNode)
  {
      if (pNode == 0)
          return;
      preOrder(left);
      preOrder(right);
      cout << data << endl;
  }
};

#endif
