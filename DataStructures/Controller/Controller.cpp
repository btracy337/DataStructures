//
//  Controller.cpp
//  DataStructures
//
//  Created by Tracy, Bryan on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    cout << "Welcome to the data structures app" << endl;
    usingNodes();
    funLoop();
}

void Controller :: usingNodes()
{
    Node<int> mine(5);
    Node<string> wordHolder("words can be stored here");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced text");
    cout << wordHolder.getData() << endl;
}

void Controller :: funLoop()
{
    for(int i = 0; i < 100000; i++)
    {
        cout << "This should loop 100000 times" << endl;
    }
}
