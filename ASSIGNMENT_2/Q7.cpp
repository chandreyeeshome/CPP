//ASSIGNMENT 2 Q) 7)

//Find out the lowest common factor ( LCF ) of two input numbers using function.

#include<iostream>
using namespace std;

int lcf(int a, int b);
int main()
{
    int num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"The Lowest Common Factor (LCF) of "<<num1<<" and "<<num2<<" is: "<<lcf(num1,num2);
}
int lcf(int a, int b)
{
    int lower,i;
    lower=(a<b)?a:b;
    for(i=2;i<=lower;i++)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
        }
    }
}