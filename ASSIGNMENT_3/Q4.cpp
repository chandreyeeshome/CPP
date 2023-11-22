//ASSIGNMENT 3 Q) 4)

//Create a class called Circle with an attribute radius. Write a program to calculate and
//display the circumference of a circle using the Circle class.


#include<iostream>
using namespace std;

class Circle
{
    float radius, circumference;
    public:
        void calculate()
        {
            cout<<"Enter radius of circle: ";
            cin>>radius;
            circumference = 2 * 3.14 * radius;
        }
        void display()
        {
            cout<<"Circumference of circle with radius "<<radius<<" is: "<<circumference;
        }
};

int main()
{
    Circle circle;
    circle.calculate();
    circle.display();
    return 0;
}