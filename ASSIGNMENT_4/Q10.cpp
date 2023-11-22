//ASSIGNMENT 4 Q) 10)

// Create a class Point with attributes x (int) and y (int).
// Implement a parameterized constructor that initializes x and y based on user input. 
// Write a program to create an object of the Point class and display the point's coordinates.

#include<iostream>
using namespace std;

class Point
{
    private:
        int x, y;
    public:
        Point(int X, int Y)
        {
            x = X;
            y = Y;
        }
        void display()
        {
            cout<<"Point has coordinates ("<<x<<" , "<<y<<")"<<endl;
        }
};

int main()
{
    int x, y;
    cout<<"Enter value of coordinate x: ";
    cin>>x;
    cout<<"Enter value of coordinate y: ";
    cin>>y;
    Point point(x, y);
    point.display();
    return 0;
}