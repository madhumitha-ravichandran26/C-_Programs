#include<iostream>
using namespace std;
int main ()
{
    int a[10][10],b[10][10],r,c,i,j;
    cout << "Enter the rows : ";
    cin >> r;
    cout << "Enter the columns : ";
    cin >> c;
    cout << "\n Enter the Matrix : ";
    for (i = 0; i < r; i++)
    {
    for (j= 0; j < c; j++)
    {
        cin >> a[i][j];
    }
    cout<<"\n";
    }
    cout<< "Transpose Matrix: \n";
    for (i = 0; i < r; i++)
    {
    for (j= 0; j < c; j++)
    {
        b[j][i]= a[i][j];
    }
    }
    for (i = 0; i < c; i++)
    {
    for (j= 0; j < r; j++)
    {
       cout<<"\t"<< b[i][j];
    }
    cout<<"\n";
    }

}