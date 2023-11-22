//ASSIGNMENT 3 Q) 8)

//Create a class called TemperatureConverter with methods to convert between Celsius and Fahrenheit temperatures. 
//Write a program to convert a temperature from Celsius to Fahrenheit using the TemperatureConverter class.

#include<iostream>
using namespace std;

class TemperatureConvertor
{
    float C;
    public:
        void input()
        {
            cout<<"Enter temperature in Celsius: ";
            cin>>C;
            cout<<C;
        }
        void convert()
        {
            cout<<"Temperature in Fahrenheit: "<<(C*9/5)+32<<" F"<<endl;
        }
};

int main()
{
    TemperatureConvertor temp;
    temp.input();
    temp.convert();
    return 0;
}