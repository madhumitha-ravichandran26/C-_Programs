#include<iostream>
using namespace std;
int main ()
{
    int a[10][10],b[10][10],d[10][10],r,c,i,j;
    cout << "Enter the rows : ";
    cin >> r;
    cout << "Enter the columns : ";
    cin >> c;
    cout << "\n Enter the Matrix A: ";
    for (i = 0; i < r; i++)
    {
    for (j= 0; j < c; j++)
    {
        cin >> a[i][j];
    }
    cout<<"\n";
    }
    cout << "\n Enter the Matrix B: ";
    for (i = 0; i < r; i++)
    {
    for (j= 0; j < c; j++)
    {
        cin >> b[i][j];
    }
    cout<<"\n";
    }
    cout<< "Difference of Matrix: \n";
    for (i = 0; i <r; i++)
    {
    for (j= 0; j < c; j++)
    {
        d[i][j]=a[i][j]-b[i][j];
       cout<<"\t"<< d[i][j];
    }
    cout<<"\n";
    }

}