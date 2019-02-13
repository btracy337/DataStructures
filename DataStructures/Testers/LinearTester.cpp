//
//  LinearTester.cpp
//  DataStructures
//
//  Created by Tracy, Bryan on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "LinearTester.hpp"
void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/btra7742/Downloads/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/btra7742/Downloads/crime.csv");
    crimeTimerOOP.stopTimer();
    
    crimeTimerSTL.displayInformation();
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
}
