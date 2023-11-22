//ASSIGNMENT 6 Q) 9)

// Create a base class Person with a public attribute name (string). 
// Create a derived class Employee from Person using private inheritance.
// Write a program to create an object of the Employee class, set its attributes, and attempt to access the name attribute directly
// (which should result in an error). [ Private Inheritance ]

#include<iostream>
using namespace std;

class Person
{
    public:
        char name[20];
};
class Employee: private Person
{
    public:
        void input()
        {
            cout<<"Enter name: ";
            cin>>name;
        }
        void display()
        {
            cout<<"Name: "<<name;
        }
};
int main()
{
    Employee employee;
    cout<<name;
    // employee.input();
    // employee.display();
    return 0;
}