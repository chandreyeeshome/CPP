//ASSIGNMENT 4 Q) 7)

// Create a class Circle with an attribute radius.
// Implement a parameterized constructor that initializes radius based on user input. 
// Write a program to create an object of the Circle class and calculate and display its circumference.

#include<iostream>
using namespace std;

class Circle
{
    private:
        int radius;
    public:
        Circle(int rad)
        {
            radius = rad;
        }
        void display()
        {
            cout<<"Circumference of circle: "<<2 * 3.14 * radius<<" metres"<<endl;
        }
};
int main()
{
    int rad;
    cout<<"Enter radius of circle: ";
    cin>>rad;
    Circle circle(rad);
    circle.display();
    return 0;
}