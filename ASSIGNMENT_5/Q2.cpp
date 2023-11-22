//ASSIGNMENT 5 Q) 2)

//Create a class BankAccount with a private attribute balance (double). 
//Write a program to create an object of the BankAccount class, attempt to access the balance directly,
//and display an error message. [ Private Access Specifier ]

#include<iostream>
using namespace std;

class BankAccount
{
    private:
        double balance;
};

int main()
{
    BankAccount acc;
    cout<<"Enter bacnk account number: ";
    cin>>acc.balance;
    return 0;
}