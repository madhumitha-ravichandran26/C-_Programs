#include<iostream>
using namespace std;
int main ()
{
    int a[10][10],r,c,i,j,s=0,t=0;
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
    for (i = 0; i < r; i++)
    {
    for (j= 0; j <c; j++)
    {
        s=s+a[i][j];  
    }
    cout<<"\nrow sum of "<<i<<":"<<s;
    s=0;
    }
    t=0;
    for (j= 0; j <c; j++)
    {
    for (i = 0; i < r; i++)
    {
    t=t+a[i][j]; 
    }
    cout<<"\ncolumn sum of "<<j<<":"<< t;
    t=0;
    } 
}