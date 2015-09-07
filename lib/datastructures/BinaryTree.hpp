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
bool BinaryTree<T>::isBST(BinaryTree<T>* pRoot)
{
    if (!pRoot)
        return true;

    bool leftIsBST = !pRoot->left;
    bool rightIsBST = !pRoot->right;

    if (pRoot->left && pRoot->left->data < pRoot->data)
    {
        leftIsBST = isBST(pRoot->left);
    }
    if (pRoot->right && pRoot->right->data > pRoot->data)
    {
        rightIsBST = isBST(pRoot->right);
    }
    return leftIsBST && rightIsBST;
}

template<class T>
bool BinaryTree<T>::isLeaf() const
{
  return !left && !right;
}

template<class T>
bool BinaryTree<T>::nodeIsFull() const
{
  return left && right;
}

template<class T>
int BinaryTree<T>::getNumChildren() const
{
  return bool(left) + bool(right);
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
void BinaryTree<T>::traverse(BinaryTree<T>* pNode, BinaryTree<T>::TraversalOrder order, std::vector<T>& vec, bool keepNull)
{
    if (pNode == 0)
    {
        if (keepNull)
            vec.resize(vec.size() + 1);
        return;
    }

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

template<class T>
int BinaryTree<T>::size(BinaryTree<T>* pNode)
{
    int leftChildren = 0;
    int rightChildren = 0;
    if (!pNode)
        return 0;
    if (pNode->left)
        leftChildren = size(pNode->left);
    if (pNode->right)
        rightChildren = size(pNode->right);

    return leftChildren + rightChildren + 1;
}

template<class T>
int BinaryTree<T>::minDepth(BinaryTree<T> *root)
{
    if (!root)
        return 0;
    return 1 + min(minDepth(root->left), minDepth(root->right));
}

template<class T>
int BinaryTree<T>::maxDepth(BinaryTree<T> *root)
{
    if (!root)
        return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

template<class T>
bool BinaryTree<T>::isBalanced(BinaryTree<T> *root)
{
    return (maxDepth(root) - minDepth(root) < 1);
}

template <class T>
BinaryTree<T>* BinaryTree<T>::find(T toFind)
{
    if (data == toFind)
        return this;

    if (left)
    {
        BinaryTree<T>* l = left->find(toFind);
        if (l && l->data == toFind)
            return l;
    }
    if (right)
    {
        BinaryTree<T>* r = right->find(toFind);
        if (r && r->data == toFind)
            return r;
    }
    
    return 0;
}

#endif // BINARYTREE_HPP
