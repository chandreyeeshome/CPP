//ASSIGNMENT 2 Q) 4)

//Write a program to Create a Menu driven Calculator with basic functions.

#include<iostream>
using namespace std;

int add(int n1, int n2)
{
    return(n1+n2);
}
int subtract(int n1, int n2)
{
    return(n1-n2);
}
int multiply(int n1, int n2)
{
    return(n1*n2);
}
int divide(int n1, int n2)
{
    return(n1/n2);
}
int mod(int n1,int n2)
{
    return(n1%n2);
}
int main()
{
    int num1,num2;
    char ch;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    //cout<<"A : ADD\nB : SUBTRACT\nC : MULTIPLY\nD : DIVIDE\nE : MODULUS\nEnter choice: ";
    cout<<"Enter operator: ";
    cin>>ch;

    switch(ch)
    {
        // case 'A':
        //         cout<<num1<<" + "<<num2<<" = "<<add(num1,num2);
        //         break;
        // case 'B':
        //         cout<<num1<<" - "<<num2<<" = "<<subtract(num1,num2);
        //         break;
        // case 'C':
        //         cout<<num1<<" * "<<num2<<" = "<<multiply(num1,num2);
        //         break;
        // case 'D':
        //         cout<<num1<<" / "<<num2<<" = "<<divide(num1,num2);
        //         break;
        // case 'E':
        //         cout<<num1<<" % "<<num2<<" = "<<mod(num1,num2);
        //         break;
        case '+':
                cout<<num1<<" + "<<num2<<" = "<<add(num1,num2);
                break;
        case '-':
                cout<<num1<<" - "<<num2<<" = "<<subtract(num1,num2);
                break;
        case '*':
                cout<<num1<<" * "<<num2<<" = "<<multiply(num1,num2);
                break;
        case '/':
                cout<<num1<<" / "<<num2<<" = "<<divide(num1,num2);
                break;
        case '%':
                cout<<num1<<" % "<<num2<<" = "<<mod(num1,num2);
                break;
        default:
                cout<<"Wrong Choice!";
    }
}
