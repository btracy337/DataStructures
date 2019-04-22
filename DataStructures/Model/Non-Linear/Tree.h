//
//  Tree.h
//  DataStructures
//
//  Created by Tracy, Bryan on 4/22/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Tree_h
#define Tree_h
#include "../../Nodes/BinaryTreeNode.h"
template <class Type>
class Tree
{
protected:
    BinaryTreeNode<Type> * root;
public:
    virtual int getSize() = 0;
    virtual int getHeight() = 0;
    virtual bool isComplete() = 0;
    virtual bool isBalanced() = 0;
    
    virtual void insert(Type data) = 0;
    virtual void contains(Type data) = 0;
    virtual void remove(Type data) = 0;
    
    virtual void inOrderTraversal() = 0;
    virtual void preOrderTraversal() = 0;
    virtual void postOrderTraversal() = 0;
}

#endif /* Tree_h */
