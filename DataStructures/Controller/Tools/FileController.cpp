//
//  FileController.cpp
//  DataStructures
//
//  Created by Tracy, Bryan on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "FileController.hpp"
#include "../Model/Linear/LinkedList.h"

LinkedList<CrimeData> FileController :: readDataToList(string fileName)
{
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    if(dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            if(rowCount != 0)
        }
    }
    
}
