//
//  GraphTester.hpp
//  DataStructures
//
//  Created by Tracy, Bryan on 3/18/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include <iostream>
#include <"/Users/btra7742/Documents/C++/DataStructures/DataStructures/Model/Non-Linear/Graph.h">
class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
    
public:
    void testGraphs();
}

#endif /* GraphTester_hpp */
