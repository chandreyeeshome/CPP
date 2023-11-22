//ASSIGNMENT 5 Q) 5)

// Create a class Student with a private member function showDetails(). 
// Write a public member function to set student details and call the private member function to display them.
// Write a program to create an object of the Student class, set details, and display them.

#include<iostream>
using namespace std;

class Student
{
    private:
        string name, studentId;
        void showDetails()
        {
            cout<<"Name: "<<name<<"\nStudent ID.: "<<studentId<<endl;
        }
    public: 
        void setDetails()
        {
            cout<<"Enter name: ";
            getline(cin,name);
            cout<<"Enter Student ID.: ";
            getline(cin,studentId);
            showDetails();
        }

};

int main()
{
    Student student;
    student.setDetails();
    return 0;
}