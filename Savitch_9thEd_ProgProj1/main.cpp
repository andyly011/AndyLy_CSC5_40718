/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 8, 2015, 6:27 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    int op1,op2,sum=0,prod=0;
    //Prompt for the two operands
    cout<<"Input 2 integers having a range of [-2^31,2^31-1]"<<endl;
            cin>>op1>>op2;
    //Calculate the sum and the product
    sum=sum+op1;
    sum=sum+op2;
    prod=prod*op1;
    prod=prod*op2;
    //Output the results
    cout<<op1<<" + "<<op2<<" = "<<sum<<endl;
    cout<<op1<<" * "<<op2<<" ="<<prod<<endl;
    //Exit stage right!
            
    return 0;
}

