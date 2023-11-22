//ASSIGNMENT 6 Q)7)

//Create an abstract base class Shape with a pure virtual function area(). Create two
//derived classes, Circle and Rectangle, from Shape, each implementing the area()
//function to calculate its specific area. Write a program to create objects of both Circle
//and Rectangle classes, call the area() function for each, and display their areas.[
//Abstract Base Class ]

#include<iostream>
using namespace std;

class Shape
{
        public:
                virtual void area()=0;
};
class Circle:public Shape
{
        float r,area_circ;
        public:
                void area()
                {
                        cout<<"Enter the radius: ";
                        cin>>r;
                        area_circ=3.14*r*r;
                        cout<<"Area of circle: "<<area_circ<<" metre squares"<<endl;
                }
};
class Rectangle:public Shape
{
        int l,b,area_rect;
        public:
                void area()
                {
                        cout<<"Enter the length: ";
                        cin>>l;
                        cout<<"Enter the breadth: ";
                        cin>>b;
                        area_rect=l*b;
                        cout<<"Area of rectangle: "<<area_rect<<" metre squares"<<endl;
                }
};
int main()
{
        Shape *shape;
        Circle circle;
        Rectangle rectangle;
        
        shape=&circle;
        shape->area();

        shape=&rectangle;
        shape->area();
        
        return 0;
}