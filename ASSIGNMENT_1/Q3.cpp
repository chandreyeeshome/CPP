//ASSIGNMENT 1 Q) 3)

//Write a program that adds two numbers and displays the result.

#include<iostream>
using namespace std;

int main()
{
    int num1,num2,sum;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    sum = num1+num2;
    cout<<"Sum of "<<num1<<" and "<<num2<<" is: "<<sum<<endl;
    return 0;
}