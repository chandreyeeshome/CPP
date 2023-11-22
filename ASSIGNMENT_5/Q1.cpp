//ASSIGNMENT 5 Q) 1)

//Create a class Person with a public attribute name (string). 
//Write a program to create an object of the Person class, set the name, and display it. [ Public Access Specifier ]

#include<iostream>
using namespace std;

class Person
{
    public:
        string name;
        void setAttribute()
        {
            cout<<"Enter your name: ";
            cin.ignore(0);
            getline(cin,name);
        }
        void display()
        {
            cout<<"Name: "<<name;
        }
};

int main()
{
    Person person;
    person.setAttribute();
    person.display();
    return 0;
}
