//ASSIGNMENT 3 Q) 6)

//Create a class called BankAccount with attributes accountNumber (string) and balance (double). 
//Write a program to create an object of the BankAccount class, set its attributes, and display the account information.

#include<iostream>
using namespace std;

class BankAccount
{
    string accountNumber;
    double balance;
    public:
        void setAttribute()
        {
            cout<<"Enter account number: ";
            cin.ignore(0);
            getline(cin, accountNumber);
            cout<<"Enter balance: ";
            cin>>balance;
        }
        void display()
        {
            cout<<"Account Number: "<<accountNumber<<"\nBalance: "<<balance<<endl;
        }
};

int main()
{
    BankAccount acc;
    acc.setAttribute();
    acc.display();
    return 0;
}