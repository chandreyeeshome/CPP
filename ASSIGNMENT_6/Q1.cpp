//ASSIGNMENT 6 Q) 1)

//Create a base class Animal with attributes name and age. Create a derived class Dog
//from Animal with an additional attribute breed. Write a program to create an object of
//the Dog class, set its attributes, and display them. [ Single Inheritance ]

#include<iostream>
using namespace std;
class Animal
{
    public:    //nothing mentioned in question so take it public?
        char name[50];
        int age;
};
class Dog: public Animal //can i keep it private or protected to?
{
    char breed[50];
    public:
        void input()
        {
            cout<<"Enter Dog's name: ";
            cin>>name;
            cout<<"Enter the breed: ";
            cin>>breed;
            cout<<"Enter age of dog: ";
            cin>>age;
            display();
        }
        void display()
        {
            cout<<"\nName of dog: "<<name;
            cout<<"\nAge of dog: "<<age;
            cout<<"\nBreed of dog: "<<breed;
        }
};
int main()
{
    Dog Shiro;
    Shiro.input();
    return 0;
}

