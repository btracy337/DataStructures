//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Tracy, Bryan on 4/22/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp
#include "../Model/Nodes/BinaryTreeNode.h"
#include "../Model/Non-Linear/BinarySearchTree.h"
#include <iostream>
class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void doTreeStuff();
}

#endif /* BinaryTreeTester_hpp */
