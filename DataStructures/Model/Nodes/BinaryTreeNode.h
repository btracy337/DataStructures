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
    
}
#endif /* BinaryTreeNode_h */
