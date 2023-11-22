//ASSIGNMENT 3 Q) 3)

//Create a class called Student with attributes name (string) and grade (int). Write a program to create an array of Student objects, 
//set their attributes, and display the student information.

#include<iostream>
using namespace std;

class Student
{
    string name;
    int grade;
    public:
        void setAttribute()
        {
            cout<<"\nEnter student name: ";
            cin.ignore(0);
            getline(cin,name);
            cout<<"Enter grade: ";
            cin>>grade;
        }
        void display()
        {
            cout<<"\nName: "<<name<<"\nGrade: "<<grade<<endl;
        }
};
int main()
{
    Student student[20];
    int n,i;
    cout<<"Enter number of students: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        student[i].setAttribute();
    }
    for(i=0;i<n;i++)
    {
        student[i].display();
    }

}