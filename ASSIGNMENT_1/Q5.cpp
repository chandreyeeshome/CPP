//ASSIGNMENT 1 Q) 5)

//Create a program to swap two numbers without using 3rd Variable.

#include<iostream>
using namespace std;

void swap(int a,int b);
int main()
{
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    swap(num1,num2);
    return 0;
}
void swap(int a,int b)
{
    cout<<"BEFORE SWAP"<<endl;
    cout<<"First Number: "<<a;
    cout<<"\nSecond Number: "<<b;

    b = a+b;
    a = b-a;
    b = b-a;

    cout<<"\n\nAFTER SWAP"<<endl;
    cout<<"First Number: "<<a;
    cout<<"\nSecond Number: "<<b;
}
