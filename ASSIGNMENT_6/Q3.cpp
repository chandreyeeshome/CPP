//ASSIGNMENT 6 Q)3)
//Create a base class Vehicle with attributes make and model. Create a derived class
//Car from Vehicle with an additional attribute year. Create another derived class
//SportsCar from Car with an additional attribute topSpeed. Write a program to create an
//object of the SportsCar class, set its attributes, and display them.[Multilevel Inheritance]

#include<iostream>
using namespace std;
class Vehicle
{
    public:
        char maker[20];
        int model;
};
class Car:public Vehicle
{
    public:
        int year;
};
class SportsCar:public Car
{
    int topSpeed;
    public:
        void input()
        {
            cout<<"Enter car maker: ";
            cin>>maker;
            cout<<"Enter car model: ";
            cin>>model;
            cout<<"Enter year: ";
            cin>>year;
            cout<<"Enter topspeed: ";
            cin>>topSpeed;
            display();
        }
        void display()
        {
            cout<<"\nCar maker: "<<maker<<"\nModel: "<<model<<"\nYear: "<<year<<"\ntopspeed: "<<topSpeed;
        }
};
int main()
{
    SportsCar ob1;
    ob1.input();
    return 0;
}
