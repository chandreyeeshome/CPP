//ASSIGNMENT 6 Q)4)

//Create a base class Person with attributes name and age. Create two derived classes,
//Student and Teacher, from Person. Write a program to create objects of both Student
//and Teacher classes, set their attributes, and display them. [ Hierarchical Inheritance ]

#include<iostream>
using namespace std;

class Person
{
    public:
    char name[20];
    int age;
};
class Student: public Person
{
    public:
    void set_attribute()
    {
        cout<<"Enter name of student: ";
        cin>>name;
        cout<<"Enter your age: ";
        cin>>age;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Teacher: public Person
{
    public:
    void set_attribute()
    {
        cout<<"Enter name of teacher: ";
        cin>>name;
        cout<<"Enter your age: ";
        cin>>age;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main()
{
    Student stud1;
    Teacher teach1;
    stud1.set_attribute();
    teach1.set_attribute();
    stud1.display();
    teach1.display();
    return 0;
}