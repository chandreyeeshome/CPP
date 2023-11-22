//ASSIGNMENT 6 Q) 8)

// Create a base class Person with a protected attribute name (string). Create a derived
// class Employee from Person with an additional private attribute employeeID (string).
// Write a program to create an object of the Employee class, set its attributes, and display
// the name (inherited from Person) and the employee ID.

#include<iostream>
using namespace std;

class Person
{
    protected:
        char name[20];
};
class Employee:public Person
{
    private:
        char employeeID[20];
    public:
        void input()
        {
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Employee ID: ";
            cin>>employeeID;
        }
        void display()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Employee ID: "<<employeeID<<endl;
        }
};
int main()
{
    Employee employee;
    employee.input();
    employee.display();
    return 0;
}