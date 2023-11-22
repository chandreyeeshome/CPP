//ASSIGNMENT 3 Q) 1)

//Create a class called Person with the following attributes: name (string), age (int), and
// address (string). Write a program to create an object of the Person class, set its
// attributes, and display them.


#include<iostream>
using namespace std;

class Person
{
    string name, address;
    int age;
        
    public:
        void setAttribute()
        {
            cout<<"Enter your name: ";
            cin.ignore();
            getline(cin, name);
            cout<<"Enter your age: ";
            cin>>age;
            cout<<"Enter your address: ";
            cin.ignore();
            getline(cin, address);

        }
        void display()
        {
            cout<<"\n\nName:  "<<name<<"\nAge: "<<age<<"\nAddress: "<<address<<endl;
        }
};

int main()
{
    Person person;
    person.setAttribute();
    person.display();
}