//ASSIGNMENT 4 Q) 1)

//Create a class Student with attributes name (string) and rollNumber (int). 
//Implement a default constructor that initializes name to an empty string and rollNumber to 0. 
//Write a program to create an object of the Student class and display its attributes.

#include<iostream>
using namespace std;

class Student
{
    private:
        string name;
        int rollNumber;
    public:
        Student()
        {
            name=" ";
            rollNumber=0;
        }
        void display()
        {
            cout<<"Name: "<<name<<"\nRoll Number: "<<rollNumber<<endl;
        }
};
int main()
{
    Student student;
    student.display();
    return 0;
}
