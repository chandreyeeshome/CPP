//ASSIGNMENT 5 Q) 6)

// Create a class Shape with a protected member function printShape(). 
// Write a derived class Circle from Shape with a public member function to print "Circle." 
// Write a program to create an object of the Circle class and call the public member function to print "Circle."

#include<iostream>
using namespace std;

class Shape
{
    protected:
        void printShape()
        {
            cout<<"Circle";
        }
};
class Circle: public Shape
{
    public:
        void print()
        {
            printShape();
        }
};
int main()
{
    Circle circle;
    circle.print();
}