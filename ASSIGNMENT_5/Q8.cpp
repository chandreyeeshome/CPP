//ASSIGNMENT 5 Q) 8)

//Create a class Complex to represent complex numbers with private attributes real (double) and imaginary (double).
//Implement a friend function addComplex that takes two Complex objects as arguments
//and adds them together to create a new Complex object representing their sum.
//Write a program to create two Complex objects, set their real and imaginary parts, use the friend function to add them, and display the result.

#include<iostream>
using namespace std;

class Complex
{
    private:
        double real, imaginary;
        friend Complex addComplex(Complex&, Complex&);
    public:
        void setValues(double r, double i)
        {
            real = r;
            imaginary = i;
        }
        void displayComplex()
        {
            cout<<"The resultant complex number: "<<real<<" + "<<imaginary<<"i"<<endl;
        }
};
Complex addComplex(Complex& ob1, Complex& ob2)
{
    Complex sum;
    sum.real = ob1.real + ob2.real;
    sum.imaginary = ob1.imaginary + ob2.imaginary;
    //sum.setValues(real, imaginary);
    return sum;
}
int main()
{
    Complex ob1, ob2;
    Complex sum;
    ob1.setValues(1, 2);
    ob2.setValues(1, 3);

    sum = addComplex(ob1, ob2);

    sum.displayComplex();
}