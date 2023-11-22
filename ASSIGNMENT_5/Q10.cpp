//ASSIGNMENT 5 Q) 10)

// Create a class Matrix that represents a 2x2 matrix with private attributes a, b, c, and d.
// Implement a friend function multiply that takes two Matrix objects as arguments and multiplies them using the matrix multiplication rule. 
// Write a program to create two Matrix objects, set their values, and use the friend function to multiply them and display the result.

#include<iostream>
using namespace std;

class Matrix
{
    private:
        int a, b, c, d;
        friend void multiply(Matrix& , Matrix&);
    public:
        void setValues(int A, int B, int C, int D)
        {
            a = A;
            b = B;
            c = C;
            d = D;
        }
};

void multiply(Matrix& mat1 , Matrix& mat2)
{
    Matrix mat3;
    mat3.a = (mat1.a * mat2.a) + (mat1.b * mat2.c);
    mat3.b = (mat1.a * mat2.b) + (mat1.b * mat2.d);
    mat3.c = (mat1.c * mat2.a) + (mat1.d * mat2.c);
    mat3.d = (mat1.c * mat2.b) + (mat1.d * mat2.d);

    cout<<"The Final Matrix: \n";
    cout<<mat3.a<<" "<<mat3.b<<"\n"<<mat3.c<<" "<<mat3.d<<endl;
}

int main()
{
    Matrix matrix1, matrix2;
    matrix1.setValues(1, 2, 2, 1);
    matrix2.setValues(2, 1, 2, 1);

    multiply(matrix1, matrix2);
}
