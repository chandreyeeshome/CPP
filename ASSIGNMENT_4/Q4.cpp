//ASSIGNMENT 4 Q) 4)

// Create a class Rectangle with attributes length and width. 
// Implement a parameterized constructor that initializes length and width based on user input.
// Write a program to create an object of the Rectangle class and calculate and display its area.

#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int length, width;
    public:
        Rectangle(int L, int W)
        {
            length = L;
            width = W;
        }
        void displayArea()
        {
            cout<<"Area: "<<length*width<<" metre square"<<endl;
        }
};

int main()
{
    int len, wid;
    cout<<"Enter length of rectangle: ";
    cin>>len;
    cout<<"Enter width of rectangle :";
    cin>>wid;
    Rectangle rectangle(len, wid);
    rectangle.displayArea();
    return 0;
}
