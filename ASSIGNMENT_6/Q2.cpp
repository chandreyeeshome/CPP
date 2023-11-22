//ASSIGNMENT 6 Q)2)
//Create two base classes, Shape and Color, with attributes related to shape and color,
//respectively. Create a derived class ColoredShape that inherits from both Shape and
//Color. Write a program to create an object of the ColoredShape class, set its attributes,
//and display them.[ Multiple Inheritance ]

#include<iostream>
using namespace std;
class Shape
{
    public:
        char shape[20];
};
class Color
{
    public:
        char color[20];
};
class ColoredShape: public Shape, public Color
{
    public:
        void input()
        {
            cout<<"Enter the shape: ";
            cin>>shape;
            cout<<"Enter the color: ";
            cin>>color;
            display();
        }
        void display()
        {
            cout<<"\nThe Shape: "<<shape<<"\nThe Color: "<<color;
        }
};
int main()
{
    ColoredShape ob1;
    ob1.input();
    return 0;
}
