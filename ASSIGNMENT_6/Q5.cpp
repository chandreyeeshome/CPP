//ASSIGNMENT 6 Q)5)

//Create a base class Person with a private attribute name (string) and a public member
//function displayName() to display the name. Create a derived class Employee from
//Person with an additional private attribute employeeID (string). Write a public member
//function displayEmployee() in the Employee class that calls displayName() to display
//the name and also displays the employee ID. Write a program to create an object of the
//Employee class, set its attributes, and display them. [ Accessing Base Class Members ]

#include<iostream>
using namespace std;
class Person
{
    private:
    char name[20]="maow";
    public:
    void displayName()
    {
        cout<<"Name: "<<name<<endl;
    }
};
class Employee: public Person
{
    private:
    char employeeID[20]="abcd1234";
    public:
    void displayEmployee()
    {
        displayName();
        cout<<"Employee ID: "<<employeeID<<endl;
    }
};
int main()
{
    Employee employee;
    employee.displayEmployee();
    return 0;
}