//ASSIGNMENT 1 Q) 10)

//Write a program to Generate Characters from ASCII Values.

#include<iostream>
using namespace std;

int main()
{
    int ascii;
    cout<<"Enter an ASCII value: ";
    cin>>ascii;
    cout<<"The equivalent character for ASCII value "<<ascii<<" is: "<<char(ascii);
    return 0;
}