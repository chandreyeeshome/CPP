//ASSIGNMENT 5 Q) 9)

// Create two classes, Rectangle and Circle, with private attributes (length, width, and radius, respectively). 
// Implement a friend function calculateArea() that can access and calculate the areas of both Rectangle and Circle objects. 
// Write a program to create objects of both classes, set their dimensions/radius, and use the friend function to display their areas.

#include<iostream>
using namespace std;

class Circle;
class Rectangle
{
    private:
        int length, width;
        friend void calculateArea(Rectangle& , Circle&);

    public:
        void setDimensions()
        {
            cout<<"Enter length of rectangle: ";
            cin>>length;
            cout<<"Enter width of rectangle: ";
            cin>>width;
        }
};
class Circle
{
    private:
        int radius;
        friend void calculateArea(Rectangle& , Circle&);

    public:
        void setRadius()
        {
            cout<<"Enter radius of circle: ";
            cin>>radius;
        }
};

void calculateArea(Rectangle& rec, Circle& circ)
{
    cout<<"\nArea of rectangle: "<<rec.length * rec.width<<" metres square"<<"\nArea of Circle: "<<3.14 * circ.radius * circ.radius<<" metres square"<<endl;
}
int main()
{
    Rectangle rectangle;
    Circle circle;
    rectangle.setDimensions();
    circle.setRadius();
    calculateArea(rectangle, circle);
    return 0;
}