//ASSIGNMENT 5 Q) 7)

//Create a class MyClass with a private member value. Declare a friend function displayValue() that can access and display the private member. 
//Write a program to create an object of the MyClass class, set the value, and call the friend function to display it.[ Friend Function ]

#include<iostream>
using namespace std;

class MyClass
{
    private:
        int value;
        friend void displayValue(MyClass&);
    public:
        void setValue()
        {
            cout<<"Enter a value: ";
            cin>>value;
        }
};

void displayValue(MyClass& obj)
{
    cout<<"\nValue: "<<obj.value<<endl;
}
int main()
{
    MyClass obj1;
    obj1.setValue();
    displayValue(obj1);
}