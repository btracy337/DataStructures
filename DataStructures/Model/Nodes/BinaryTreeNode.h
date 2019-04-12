//
//  BinaryTreeNode.h
//  DataStructures
//
//  Created by Tracy, Bryan on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_h
#define BinaryTreeNode_h
#include "Node.hpp"
#include <assert.h>
template <class Type>
class BinaryTreeNode : public Node<Type>
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    BinaryTreeNode<Type> * getRoot();
    
    void setRoot(BinaryTreeNode<Type> * root);
    BinaryTreeNode<Type> * getLeftChild();
    void setLeftChild(BinaryTreeNode<Type> * left);
    BinaryTreeNode<Type> * getRightChild();
    void setRightChild(BinaryTreeNode * right);
    
};
template <class Type>
BinaryTreeNode<Type> :: binaryTreeNode() : Node<Type>()
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}
template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data)
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
{
    return this->root;
}
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightNode()
{
    return this->right
}
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftNode()
{
    return this->left;
}
template <class Type>
void BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * newRoot)
{
    root = newRoot;
}
template <class Type>
void BinaryTreeNode<Type> :: setRightNode(BinaryTreeNode<Type> * right)
{
    this->right = right;
}
template <class Type>
void BinaryTreeNode<Type> :: setLeftnode(BinaryTreeNode<Type> * left)
{
    this->left = left;
}
#endif /* BinaryTreeNode_h */
