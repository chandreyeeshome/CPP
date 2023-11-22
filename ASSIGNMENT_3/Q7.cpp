//ASSIGNMENT 3 Q) 7)

//Create a class called Employee with attributes name (string) and salary (double). 
//Write a program to create an object of the Employee class, set its attributes, and display the employee information.

#include<iostream>
using namespace std;

class Employee
{
    string name;
    double salary;
    public:
        void setAttribute()
        {
            cout<<"Enter name: ";
            cin.ignore(0);
            getline(cin, name);
            cout<<"Enter salary: ";
            cin>>salary;
        }
        void display()
        {
            cout<<"Name of Employee: "<<name<<"\nSalary: "<<salary<<endl;
        }
};

int main()
{
    Employee employee;
    employee.setAttribute();
    employee.display();
    return 0;
}