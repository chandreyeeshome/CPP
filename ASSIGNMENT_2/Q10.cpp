//ASSIGNMENT 2 Q) 10)

// Create a base class called Shape with the following members: [Inheritance]
// ● A protected member variable name of type string to store the name of the shape.
// ● A public parameterized constructor that takes a single string parameter to
// initialize the name member.
// ● A public virtual function called area() that returns 0.0 (to be overridden by derived
// classes).
// ● Now, create two derived classes, Circle and Rectangle, from the Shape class.

// For each derived class, implement the following:
// ● A constructor that initializes the name and relevant dimensions (e.g., radius for a
// circle or length and width for a rectangle).
// ● Override the area() function to calculate and return the area of the respective
// shape (π * radius^2 for a circle and length * width for a rectangle).
// In your main program, create instances of both Circle and Rectangle, set their
// dimensions, and then display their names and areas.

#include<iostream>
using namespace std;

class Shape
{
    protected:
        string nameShape;
    public:
        Shape(string name)
        {
            nameShape = name;
        }
        virtual float area()
        {
            return 0.0;
        }
};

class Circle: public Shape
{
    private:
        int radius;
    public:
        Circle():Shape("Circle")
        {
            cout<<"Enter radius of circle: ";
            cin>>radius;
        }
        float area()
        {
            return 3.14 * radius * radius;
        }
        void display()
        {
            cout<<"Name: "<<nameShape<<endl;
            cout<<"Area of circle with radius "<<radius<<" is : "<<area()<<endl;

        }

};
class Rectangle: public Shape
{
    private:
        int length, width;
    public:
        Rectangle():Shape("Rectangle")
        {
            cout<<"Enter length of rectangle: ";
            cin>>length;
            cout<<"Enter width of rectangle: ";
            cin>>width;
        }
        float area()
        {
            return length * width;
        }
        void display()
        {
            cout<<"Name: "<<nameShape<<endl;
            cout<<"Area of rectangle with length "<<length<<" and width "<<width<<" is : "<<area()<<endl;
        }

};
int main()
{
    Circle circle;
    Rectangle rectangle;
    circle.display();
    rectangle.display();
    return 0;
}