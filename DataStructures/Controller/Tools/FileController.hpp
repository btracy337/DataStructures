//
//  FileController.hpp
//  DataStructures
//
//  Created by Tracy, Bryan on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "/Users/btra7742/Documents/C++/DataStructures/DataStructures/Model/Linear/Array.hpp"
#include "/Users/btra7742/Documents/C++/DataStructures/DataStructures/Model/Linear/LinkedList.h"
//#include "../Model/NonLinear/BinarySearchTree.hpp"
#include "/Users/btra7742/Downloads/CrimeData.hpp"
#include "/Users/btra7742/Downloads/Music.hpp"

using namespace std;
class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
    //static BinarySearchTree<CrimeData> readDataToTree(string filename);
    
    static vector<Music> musicDataToVector(string filename);
    
    static Array<Music> musicDataToArray(string filename);
    static LinkedList<Music> musicDataToList(string filename);
    //static BinarySearchTree<Music> musicDataToTree(string filename);
    
};


#endif /* FileController_hpp */
