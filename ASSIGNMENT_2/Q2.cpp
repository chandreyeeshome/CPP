//ASSIGNMENT 2 Q) 2)

//Write a program to Check if a Given Year is a Leap Year.

#include<iostream>
using namespace std;

bool leapyear(int yr);
int main()
{
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    if(leapyear(year))
    {
        cout<<year<<" is a Leap Year.";
    }
    else
    {
        cout<<year<<" is not a Leap Year.";
    }
}

bool leapyear(int yr)
{
    if((yr%4==0 && yr%100!=0) || yr%400==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}