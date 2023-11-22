//ASSIGNMENT 1 Q) 7)

//Write a program to calculate the compound and simple interest.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double P, R, T, SI, CI;

    cout<<"Enter Principal (in Rs.): ";
    cin>>P;
    cout<<"Enter Rate (in %): ";
    cin>>R;
    cout<<"Enter Time (in Yrs): ";
    cin>>T;    

    SI = (P * R * T) / 100;
    CI = (P * ((pow((1 + R / 100), T)))) - P;
    cout<<"\nSimple Interest: "<<SI;
    cout<<"\nCompound Interest: "<<CI;
    return 0;
}