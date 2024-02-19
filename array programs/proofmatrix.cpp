#include<iostream>
using namespace std;
int main ()
{
    int a[10][10],b[10][10],d[10][10],r,c,i,j,k,s=0;
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
    cout<< "Product of Matrix: \n";
    for (i = 0; i < r; i++)
    {
    for (j= 0; j < c; j++)
    {   
        s=0;   
        for (k = 0; k < r; k++)  
          s+=a[i][k]*b[k][j];                                                                                                           
          d[i][j]=s;
    cout<<"\t"<< d[i][j];
    }
    cout<<"\n";
    }

}