//ASSIGNMENT 4 Q) 2)

// Create a class Person with attributes name (string) and age (int). 
// Implement a parameterized constructor that initializes name and age based on user input. 
// Write a program to create an object of the Person class and display its attributes.

#include<iostream>
using namespace std;

class Person
{
    private:
        string name;
        int age;
    public:
        Person(string Name, int Age)
        {
            name = Name;
            age = Age;
        }
        void display()
        {
            cout<<"Name: "<<name<<"\nAge: "<<age<<endl;
        }
};
int main()
{
    string name;
    int age;
    cout<<"Enter name: ";
    getline(cin, name);
    cout<<"Enter age: ";
    cin>>age;
    Person person(name, age);
    person.display();
}
