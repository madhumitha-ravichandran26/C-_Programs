#include<iostream>
using namespace std;
int main ()
{
    int a[10][10],r,c,i,j,f;
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
    for (j= 0; j < c; j++)
    {
        if(i==j && a[i][j]!=1)
        {
            f=-1;
            break;
        }
        else if(i!=j && a[i][j]!=0)
        {
            f=-1;
            break;
        }
    }
    }
if(f==0)
{
      cout<<"Not unit matrix";      
}
else
{
    cout<<"Unit matrix"; 
}
}