//ASSIGNMENT 2 Q) 5)

//Write a program to check whether a number is Palindrome or Not. [121 in reverse become 121, so its Palindrome]

#include<iostream>
using namespace std;

bool checkPalin(int num);
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(checkPalin(num))
    {
        cout<<num<<" is a Palindrome number.";
    }
    else
    {
        cout<<num<<" is not a Palindrome number.";
    }
}
bool checkPalin(int num)
{
    int rev,dig,temp;
    rev=0;
    temp=num;
    while(temp!=0)
    {
        dig=temp%10;
        temp=temp/10;
        rev=(rev*10)+dig;
    }
    if(rev==num)
    {
        return true;
    }
    else
    {
        return false;
    }
}
