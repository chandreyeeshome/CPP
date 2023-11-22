//ASSIGNMENT 3 Q) 9)

//Create a class called Time with attributes hours and minutes.
//Write a program to create an object of the Time class, set its attributes, and display the time.

#include<iostream>
using namespace std;

class Time
{
    int hours, minutes;
    public:
        void setAttribute()
        {
            cout<<"Enter hours: ";
            cin>>hours;
            cout<<"Enter minutes: ";
            cin>>minutes;
        }
        void display()
        {
            cout<<"Time: "<<hours<<" hours "<<minutes<<" minutes"<<endl;
            cout<<"Time: "<<hours<<" : "<<minutes<<endl;
        }
};

int main()
{
    Time time;
    time.setAttribute();
    time.display();
    return 0;
}