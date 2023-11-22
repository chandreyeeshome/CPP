//ASSIGNMENT 1 Q) 2)
//Create a program that takes an integer as input and prints its double.

#include<iostream>
using namespace std;

int main()
{
    int num;
    double num2;
    cout<<"Enter an integer: ";
    cin>>num;
    num2 = (double)num;
    cout<<num<<" converted to double: "<<num2<<endl;
    return 0;
}