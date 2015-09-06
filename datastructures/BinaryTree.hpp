#ifndef BINARYTREE_HPP
#define BINARYTREE_HPP

template<class T>
BinaryTree<T>::BinaryTree(T val) : left(0), right(0), data(val)
{
}

template<class T>
BinaryTree<T>* BinaryTree<T>::createMinimalBST(T array[], int start, int end)
{
    if (end < start)
        return 0;
    int mid = (start + end) / 2;
    BinaryTree<T>* pNode = new BinaryTree<T>(array[mid]);
    pNode->left = createMinimalBST(array, start, mid-1);
    pNode->right = createMinimalBST(array, mid+1, end);
    return pNode;
}

template<class T>
bool BinaryTree<T>::isBST(BinaryTree<T>* pRoot, BinaryTree<T>* pLeft, BinaryTree<T>* pRight)
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

template<class T>
bool BinaryTree<T>::hasChildren() const
{
  return left || right;
}

template<class T>
void BinaryTree<T>::preOrder(BinaryTree<T>* pNode)
{
    if (pNode == 0)
        return;
    cout << pNode->data << endl;
    preOrder(pNode->left);
    preOrder(pNode->right);
}

template<class T>
void BinaryTree<T>::inOrder(BinaryTree<T>* pNode)
{
    if (pNode == 0)
        return;
    preOrder(pNode->left);
    cout << pNode->data << endl;
    preOrder(pNode->right);
}

template<class T>
void BinaryTree<T>::postOrder(BinaryTree<T>* pNode)
{
    if (pNode == 0)
        return;
    postOrder(pNode->left);
    postOrder(pNode->right);
    cout << pNode->data << endl;
}

template<class T>
void BinaryTree<T>::traverse(BinaryTree<T>* pNode, BinaryTree<T>::TraversalOrder order)
{
    if (pNode == 0)
        return;

    switch(order)
    {
    case ePreOrder:
        cout << pNode->data;
        traverse(pNode->left, order);
        traverse(pNode->right, order);
        break;
    case ePostOrder:
        traverse(pNode->left, order);
        traverse(pNode->right, order);
        cout << pNode->data;
        break;
    case eInOrder:
        traverse(pNode->left, order);
        cout << pNode->data;
        traverse(pNode->right, order);
        break;
    }
}

template<class T>
void BinaryTree<T>::traverse(BinaryTree<T>* pNode, BinaryTree<T>::TraversalOrder order, std::vector<T>& vec)
{
    if (pNode == 0)
        return;

    switch(order)
    {
    case ePreOrder:
        vec.push_back(pNode->data);
        traverse(pNode->left, order, vec);
        traverse(pNode->right, order, vec);
        break;
    case ePostOrder:
        traverse(pNode->left, order, vec);
        traverse(pNode->right, order, vec);
        vec.push_back(pNode->data);
        break;
    case eInOrder:
        traverse(pNode->left, order, vec);
        vec.push_back(pNode->data);
        traverse(pNode->right, order, vec);
        break;
    }
}

#endif // BINARYTREE_HPP
