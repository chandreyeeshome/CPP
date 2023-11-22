//ASSIGNMENT 2 Q) 3)

//Write a program to Display Prime Numbers Between Two Intervals.

#include<iostream>
using namespace std;

void display(int a, int b);
bool checkPrime(int num);

int main()
{
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    display(num1, num2);
}
bool checkPrime(int num)
{
    int i, flag=1;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void display(int a, int b)
{
    int i;
    for(i=a+1;i<b;i++)
    {
        if(checkPrime(i))
        {
            cout<<" "<<i;
        }
    }
}