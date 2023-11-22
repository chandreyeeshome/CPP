//ASSIGNMENT 3 Q) 2)

//Create a class called Rectangle with attributes length and width. Write a program to
//calculate and display the area of a rectangle using the Rectangle class.

#include<iostream>
using namespace std;

class Rectangle
{
    
    int length, width;
    public:
        void area()
        {
            cout<<"Enter length of rectangle: ";
            cin>>length;
            cout<<"Enter width of rectangle: ";
            cin>>width;
        }
        void display()
        {
            cout<<"Area: "<<length*width<<" metre squares"<<endl;
        }
};
int main()
{
    Rectangle rectangle;
    rectangle.area();
    rectangle.display();
    return 0;
}
