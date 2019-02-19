//
//  FileController.cpp
//  DataStructures
///Users/btra7742/Documents/C++/DataStructures/DataStructures/Controller
//  Created by Tracy, Bryan on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "FileController.hpp"
#include "/Users/btra7742/Documents/C++/DataStructures/DataStructures/Model/Linear/LinkedList.h"

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
            {
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimes.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else{
        cerr << "NO FILE" << endl;
    }
    return crimes;
    
}

LinkedList<Music> FileController :: musicDataToList(string fileName)
{
    LinkedList<Music> musicList;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    if(dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            if(rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicList.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else{
        cerr << "NO FILE" << endl;
    }
    return musicList;
    
}

