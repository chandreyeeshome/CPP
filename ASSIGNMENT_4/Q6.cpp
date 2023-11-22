//ASSIGNMENT 4 Q) 6)

// Create a class BankAccount with attributes accountNumber (string) and balance (double).
// Implement a parameterized constructor that initializes accountNumber and balance based on user input. 
// Write a program to create an object of the BankAccount class and display the account information.

#include<iostream>
using namespace std;

class BankAccount
{
    private:
        string accountNumber;
        double balance;
    public:
        BankAccount(string accnum, double bal)
        {
            accountNumber = accnum;
            balance = bal;
        }
        void display()
        {
            cout<<"Account Number: "<<accountNumber<<"\nBalance: "<<balance<<endl;
        }
};

int main()
{
    string accnum;
    double bal;
    cout<<"Enter account number: ";
    getline(cin,accnum);
    cout<<"Enter balance: ";
    cin>>bal;
    BankAccount bankacc(accnum,bal);
    bankacc.display();
    return 0;
}