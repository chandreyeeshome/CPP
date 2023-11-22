//ASSIGNMENT 5 Q) 4)

//Create a class Rectangle with private attributes length and width.
// Write public member functions to set the dimensions and calculate the area. 
//Write a program to create an object of the Rectangle class, set its dimensions, and calculate and display the area.

#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int length, width;
    public:
        void setDimensions()
        {
            cout<<"Enter length of rectangle (in metres): ";
            cin>>length;
            cout<<"Enter width of rectangle (in metres): ";
            cin>>width;
        }
        void area()
        {
            cout<<"Area: "<<length*width<<" square metres"<<endl;
        }
};

int main()
{
    Rectangle rectangle;
    rectangle.setDimensions();
    rectangle.area();
    return 0;
}
