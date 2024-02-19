#include<iostream>
using namespace std;
int main ()
{
    int a[10][10],b[10][10],r,c,i,j,s=0;
    cout << "Enter the rows : ";
    cin >> r;
    cout << "Enter the columns : ";
    cin >> c;
    cout << "\n Enter the Matrix : \n";
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
    for (j= 0; j < c; j++)
    {
        if(i==j)
        {
            s+= a[i][j];
        }     
    }
    }
    cout<<"Sum of Diagonal elements:\n"<<s;

}