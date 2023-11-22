//ASSIGNMENT 2 Q) 6)

#include<iostream>
using namespace std;

int main()
{
    int i,j,n,k;
    int a[20][20];
    cout<<"Enter total rows: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=n;k>=i;k--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=a[i-1][j-1] + a[i-1][j];
            }
        }
        for(j=1;j<=i;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
}