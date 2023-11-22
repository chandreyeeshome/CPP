//ASSIGNMENT 3 Q) 5)

//Create a class called Book with attributes title (string) and author (string). 
//Write a program to create two Book objects, set their attributes, and display their information.

#include<iostream>
using namespace std;

class Book
{
    string title;
    string author;
    public:
        void setAttribute()
        {
            cout<<"Enter book title: ";
            cin.ignore(0);
            getline(cin, title);
            cout<<"Enter author name: ";
            cin.ignore(0);
            getline(cin, author);
        }
        void display()
        {
            cout<<"Title of book: "<<title<<"\nAuthor: "<<author<<endl;
        }
};

int main()
{
    Book book1, book2;
    book1.setAttribute();
    book2.setAttribute();
    book1.display();
    book2.display();
    return 0;
}