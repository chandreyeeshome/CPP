//ASSIGNMENT 6 Q) 10)

// Create a base class Shape with private attributes length and width. 
// Create a friend class AreaCalculator that can access the private attributes of Shape and calculate the area.
// Write a program to create an object of the Shape class, set its dimensions, and
// use the AreaCalculator friend class to calculate and display the area. [ Friend Class ]

#include<iostream>
using namespace std;

class Shape
{
    private:
        int length, width;
        friend class AreaCalculator;
};
class AreaCalculator
{
    public:
        void setDimen(Shape& rectangle)
        {
            cout<<"Enter length of rectangle: ";
            cin>>rectangle.length;
            cout<<"Enter width of rectangle: ";
            cin>>rectangle.width;
        }
        void display(Shape& rectangle)
        {
            cout<<"Area of rectangle with length "<<rectangle.length<<" and width "<<rectangle.width<<" is : "<<rectangle.length * rectangle.width<<endl;
        }
};
int main()
{
    Shape shape;
    AreaCalculator rect;
    rect.setDimen(shape);
    rect.display(shape);
}