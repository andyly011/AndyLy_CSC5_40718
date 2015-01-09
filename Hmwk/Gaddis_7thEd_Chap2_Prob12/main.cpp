/* 
 * File: main.cpp
 * Author:Andy Ly
 * Created on January 8, 2015, 7:45 PM
 * Purpose: Lab Instruction
 */

#include <iostream>
using namespace std;

//Global Constant
const unsigned short CVFTACS=43560;//Percent Conversion

//Function Prototypes
 
//Execution begins here

int main(int argc, char** argv) {
    //declare Variables
    float inSqFt,outAcrs;
    //Prompt for input
    cout<<"Input the number of square feet"<<endl;
    cout<<"to convert to Acres"<<endl;
    cin>>inSqFt;
    //Calculate Acres
    outAcrs=inSqFt/CVFTACS;
   // Ouput the results
    cout<<inSqFt<<"sq feet =";
    cout<<outAcrs<<"acres"<<endl;
    // Exit stage right!
    
    return 0;
    
}

