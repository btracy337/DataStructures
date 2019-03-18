//
//  Controller.hpp
//  DataStructures
//
//  Created by Tracy, Bryan on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Model/Nodes/LinearNode.h"
#include "FileController.hpp"
#include "../Testers/LinearTester.hpp" 
using namespace std;
class Controller{
private:
    void usingNodes();
    void testLinear();
public:
    void start();
    void funLoop();
    
};

#endif /* Controller_hpp */
