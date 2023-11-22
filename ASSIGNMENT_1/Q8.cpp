//ASSIGNMENT 1 Q) 8)

//Write a program to calculate the area and perimeter of a rectangle.

#include<iostream>
using namespace std;

int main()
{
    int length, breadth, area, perimeter;
    cout<<"Enter length of rectangle: ";
    cin>>length;
    cout<<"Enter breadth of rectangle: ";
    cin>>breadth;
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    cout<<"Area: "<<area<<" metre squares."<<endl;
    cout<<"Perimeter: "<<perimeter<<" metres.";
    return 0;
}
