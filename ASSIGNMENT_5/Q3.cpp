//ASSIGNMENT 5 Q) 3)

//Create a class Employee with a protected attribute salary (double). 
//Write a program to create a derived class Manager from Employee, set the salary using a public member
//function, and display it. [ Protected Access Specifier ]

#include<iostream>
using namespace std;

class Employee
{
    protected:
        double salary;
};

class Manager: protected Employee
{
    public:
        void setSalary()
        {
            cout<<"Enter salary: ";
            cin>>salary;
        }
        void display()
        {
            cout<<"Salary: Rs. "<<salary<<endl;
        }
};

int main()
{
    Manager manager;
    manager.setSalary();
    manager.display();
    return 0;
}
