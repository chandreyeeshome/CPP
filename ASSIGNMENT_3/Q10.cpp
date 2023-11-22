//ASSIGNMENT 3 Q) 10)

//Create a class called Car with methods start() and stop(). 
//Write a program to create an object of the Car class, call its start() and stop() methods, and display messages accordingly

#include<iostream>
using namespace std;

class Car
{
    public:
        void start()
        {
            cout<<"Car is started."<<endl;
        }
        void stop()
        {
            cout<<"Car is stopped."<<endl;
        }
};

int main()
{
    Car car;
    car.start();
    car.stop();
    return 0;
}