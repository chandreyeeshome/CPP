//ASSIGNMENT 6 Q)6)

//Create a base class Shape with a virtual function area(). Create derived classes Circle
//and Rectangle from Shape, each overriding the area() function to calculate its specific
//area. Write a program to create objects of both Circle and Rectangle classes, call the
//area() function for each, and display their areas. [Virtual Function and Polymorphism]

#include<iostream>
using namespace std;
class Shape
{
    public:
    int r,l,b,area_rect;
    float area_circ;
    virtual void area()
    {

    }
};
class Circle: public Shape
{
    public:
    void area()
    {
        cout<<"Enter radius: ";
        cin>>r;
        area_circ= 3.14*r*r;
        cout<<"Area of circle: "<<area_circ<<" metre square"<<endl;
    }
};
class Rectangle: public Shape
{
    public:
    void area()
    {
        cout<<"Enter length: ";
        cin>>l;
        cout<<"Enter breadth: ";
        cin>>b;
        area_rect= l*b;
        cout<<"Area of Rectangle: "<<area_rect<<" metre square";
    }
};
int main()
{
    Shape shape;
    Circle circle;
    Rectangle rectangle;
    circle.area();
    rectangle.area();
    return 0;
}