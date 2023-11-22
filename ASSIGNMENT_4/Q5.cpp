//ASSIGNMENT 4 Q) 5)

// Create a class Time with attributes hours and minutes. 
// Implement a parameterized constructor that initializes hours and minutes based on user input. 
// Write a program to create an object of the Time class and display the time.

#include<iostream>
using namespace std;

class Time
{
    private:
        int hours, minutes;
    public:
        Time(int hrs, int mins)
        {
            hours = hrs;
            minutes = mins;
        }
        void displayTime()
        {
            cout<<"Time: "<<hours<<" : "<<minutes<<endl;
        }
};
int main()
{
    int H, M;
    cout<<"Enter hours: ";
    cin>>H;
    cout<<"Enter minutes: ";
    cin>>M;
    Time time(H, M);
    time.displayTime();
    return 0;
}
