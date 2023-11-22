//ASSIGNMENT 2 Q) 1)

//Write a program to Check Whether a Character is a Number or Vowel or Consonant or Special character.

#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char charac;
    int check;
    cout<<"Enter a character: ";
    cin>>charac;
    check = (int)tolower(charac);


    if(check >= 48 && check <= 57)
    {
        cout<<"'"<<charac<<"' is a number";
    }
    else if(check==97||check==101||check==105||check==111||check==117)
        {
            cout<<"'"<<charac<<"' is a vowel";
        }
    else
    {
        if((check>=32 && check<=47) || (check>=58 && check<=64) || (check>=91 && check<=96) ||(check>=123 && check<=126))
        {
            cout<<"'"<<charac<<"' is a special character";
        }
        else
        {
            cout<<"'"<<charac<<"' is a consonant";
        }
    }
}
