#include<iostream>
using namespace std;
int main ()
{
    int a[10],n,x,i,c=0;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "\n Enter the elements of the array : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }  
    cout << "Enter the number to be searched : ";
    cin >> x;
    for (i = 0; i < n; i++)
    {
    if(a[i]==x)
    {
        c++;
    }
    }
    if(c==0)
    {
        cout << "\n number is not present";  
    }
    else
    {
        cout << "\n number of occurence for " <<x <<" is:"<<c; 
    }
}