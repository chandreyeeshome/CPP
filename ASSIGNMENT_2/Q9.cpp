//ASSIGNMENT 2 Q) 9)

//Write a C++ Program to Find Area of Shapes using Function Overloading.[Circle, Rectangle, Square, Cone, Cylinder, Triangle, Sphere, etc]

#include<iostream>
using namespace std;

float area(float radius);  //circle
int area(int length, int breadth);  //rectangle
int area(int sideLength);  //square
float area(float radius, float slantLength);  //cone
float area(float radius, float height, string shape);  //cylinder
int area(int side1, int side2, int base, int height);  //triangle
float area(float radius, string shape);  //sphere

int main()
{
    int length, breadth, sideLength, side1, side2, base, height;
    float rad_circ, rad_cone, rad_cyl, rad_sphere, slantLength;
    string shape;

    //Area of circle
    cout<<"Enter radius of circle: ";
    cin>>rad_circ;
    cout<<"Area of circle with radius "<<rad_circ<<" is: "<<area(rad_circ);

    //Area of rectangle
    cout<<"\n\nEnter length of rectangle: ";
    cin>>length;
    cout<<"Enter breadth of rectangle: ";
    cin>>breadth;
    cout<<"Area of rectangle with length "<<length<<" and breadth "<<breadth<<" is: "<<area(length, breadth);

    //Area of square
    cout<<"\n\nEnter side-length of square: ";
    cin>>sideLength;
    cout<<"Area of square with side "<<sideLength<<" is: "<<area(sideLength);

    //Area of cone
    cout<<"\n\nEnter radius of cone: ";
    cin>>rad_cone;
    cout<<"Enter slant-length of cone: ";
    cin>>slantLength;
    cout<<"Area of cone with radius "<<rad_cone<<" and slant-length "<<slantLength<<" is: "<<area(rad_cone, slantLength);

    //Area of cylinder
    cout<<"\n\nEnter radius of cylinder: ";
    cin>>rad_cyl;
    cout<<"Enter height of cylinder: ";
    cin>>height;
    cout<<"Area of cylinder with radius "<<rad_cyl<<" and height "<<height<<" is: "<<area(rad_cyl, height, "cylinder");

    //Area of triangle
    cout<<"\n\nEnter side-1 of triangle: ";
    cin>>side1;
    cout<<"Enter side-2 of triangle: ";
    cin>>side2;
    cout<<"Enter base of triangle: ";
    cin>>base;
    cout<<"Enter height of triangle: ";
    cin>>height;
    cout<<"Area of triangle with side-1 "<<side1<<", side-2 "<<side2<<", base "<<base<<" and height "<<height<<" is: "<<area(side1, side2, base, height);

    //Area of sphere
    cout<<"\n\nEnter radius of sphere: ";
    cin>>rad_sphere;
    cout<<"Area of sphere with radius "<<rad_sphere<<" is: "<<area(rad_sphere, "sphere");

    return 0;
}

float area(float radius)
{
    return(3.14 * radius * radius);
}

int area(int length, int breadth)
{
    return(length * breadth);
}

int area(int sideLength)
{
    return(sideLength * sideLength);
}

float area(float radius, float slantLength)
{
    return((3.14 * radius * radius) + (3.14 * radius * slantLength));
}

float area(float radius, float height, string shape)
{
    return((2 * 3.14 * radius * height) + (2 * 3.14 * radius * radius));
}

int area(int side1, int side2, int base, int height)
{
    return((base * height)/2);
}

float area(float radius, string shape)
{
    return(4 * 3.14 * radius * radius);
}

