#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
#include "lib/vector.h"

using namespace std;

template<class T>
class BinaryTreeBase {
    public:
        virtual T get_data() = 0;
        virtual BinaryTreeBase* get_left() = 0;
        virtual BinaryTreeBase* get_right() = 0;
};

template<class T>
class BinaryTree: public BinaryTreeBase<T> {
    public:
        BinaryTree(T val);

        virtual ~BinaryTree();

        enum TraversalOrder {
            ePreOrder,
            ePostOrder,
            eInOrder
        };

        virtual T get_data() {
            return data;
        }

        virtual BinaryTree* get_left() {
            return left;
        }

        virtual BinaryTree* get_right() {
            return right;
        }

        static BinaryTree<T>* createMinimalBST(T array[], int start, int end);

        static bool isBST(BinaryTree<T>* pRoot);

        bool isLeaf() const;

        bool nodeIsFull() const;

        int getNumChildren() const;

        static void preOrder(BinaryTree<T>* pNode);

        static void inOrder(BinaryTree<T>* pNode);

        static void postOrder(BinaryTree<T>* pNode);

        static void traverse(BinaryTree<T>* pNode, TraversalOrder order);

        template<class U>
        static void traverse(BinaryTree<T>* pNode, TraversalOrder order, U& vec, bool keepNull = false);

        static int size(BinaryTree<T>* pNode);

        static int minDepth(BinaryTree<T>* root);

        static int maxDepth(BinaryTree<T>* root);

        static bool isBalanced(BinaryTree<T>* root);

        BinaryTree<T>* find(T);

        static void setParentsOnChildren(BinaryTree<T>* root) {
            if (!root)
                return;
            if (root->left) {
                root->left->parent = root;
                setParentsOnChildren(root->left);
            }
            if (root->right) {
                root->right->parent = root;
                setParentsOnChildren(root->right);
            }
        }
        BinaryTree<T>* left, *right, *parent;
        T data;
};


#include "BinaryTree.hpp"

#endif
