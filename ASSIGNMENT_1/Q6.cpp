//ASSIGNMENT 1 Q) 6)

//Write a program to calculate Fahrenheit to celsius.

#include<iostream>
using namespace std;

int main()
{
    float F, C;
    cout<<"Enter temperature in Fahrenheit: ";
    cin>>F;
    C = (F - 32) * 5/9;
    cout<<"Equivalent temperature in Celcius: "<<C;
    return 0;
}