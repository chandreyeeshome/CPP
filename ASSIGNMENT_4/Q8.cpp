//ASSIGNMENT 4 Q) 8)

// //Create a class Employee with attributes name (string) and salary (double). 
// Implement a parameterized constructor that initializes name and salary based on user input.
// Write a program to create an object of the Employee class and display the employee information.

#include<iostream>
using namespace std;

class Employee
{
    private:
        string name;
        double salary;
    public:
        Employee(string Name, double Salary)
        {
            name = Name;
            salary = Salary;
        }
        void display()
        {
            cout<<"Name: "<<name<<"\nSalary: Rs. "<<salary<<endl;
        }
};

int main()
{
    string name;
    double salary;
    cout<<"Enter employee name: ";
    getline(cin,name);
    cout<<"Enter salary: ";
    cin>>salary;

    Employee employee(name, salary);
    employee.display();
    return 0;
}
