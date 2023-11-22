//ASSIGNMENT 2 Q) 8)

//Find the Factorial of a user given value using recursion.

#include<iostream>
using namespace std;

int factorial(int n);
int main()
{
    int num;
    cout<<"Enter a number to find it's factorial: ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is: "<<factorial(num);
    return 0;
}
int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return(n*factorial(n-1));
    }
}
