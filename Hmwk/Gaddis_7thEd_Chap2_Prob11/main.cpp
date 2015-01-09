/* 
 * File:main.cpp
 * Author:Andy Ly
 *Created on January 8, 2015, 8:16 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Execution begins here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    float gasTank=20;//max gallons in our gas tank
    float inTown=21.5;//In town gas miles per gallon
    float onHway=26.8;//Highway miles per gallon
    //Calculate the total miles in and out of town
    float disTown=gasTank*inTown;
    float disHway=gasTank*onHway;
    //Output the results
    cout<<"Distance in Town on a tank of gas=";
    cout<<disTown<<"(miles)"<<endl;
    cout<<"Distance on Highway with a tank of gas=";
    cout<<disHway<<"(mile)"<<endl;
    
    
    
    return 0;
}

