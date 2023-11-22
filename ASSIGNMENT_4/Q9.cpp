//ASSIGNMENT 4 Q) 9)

// Create a class Vehicle with attributes make (string) and model (string).
// Implement a parameterized constructor that initializes make and model based on user input. 
// Write a program to create an object of the Vehicle class and display the vehicle information.

#include<iostream>
using namespace std;

class Vehicle
{
    private:
        string make, model;
    public:
        Vehicle(string Make, string Model)
        {
            make = Make;
            model = Model;
        }
        void display()
        {
            cout<<"Make: "<<make<<"\nModel: "<<model<<endl;
        }
};
int main()
{
    string make, model;
    cout<<"Enter make: ";
    getline(cin, make);
    cout<<"Enter model: ";
    getline(cin, model);
    Vehicle vehicle(make, model);
    vehicle.display();
    return 0;
}
