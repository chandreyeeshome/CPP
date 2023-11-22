//ASSIGNMENT 4 Q) 3)

// Create a class Book with attributes title (string) and author (string). 
// Implement a parameterized constructor that initializes title and author based on user input. 
// Write a program to create an object of the Book class and display its attributes.

#include<iostream>
using namespace std;

class Book
{
    private:
        string title, author;
    public:
        Book(string Title, string Author)
        {
            title = Title;
            author = Author;
        }
        void display()
        {
            cout<<"Title of book: "<<title<<"\nName of Author: "<<author<<endl;
        }
};
int main()
{
    string title, author;
    cout<<"Enter name of book: ";
    getline(cin, title);
    cout<<"Enter name of author: ";
    getline(cin, author);
    Book book(title, author);
    book.display();
}
