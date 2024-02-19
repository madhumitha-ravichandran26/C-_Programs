#include<iostream>
using namespace std;
int main ()
{
    int a[10], n, i, j,t;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "\n Enter the elements of the array : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }   
    for (i = 0; i < n; i++)
    {
    for (j = i+1; j < n; j++)
    {
       if(a[i]>a[j])
       {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
       }
    }
    }
    cout << "\n Sorted in ascending order:";
    for (i = 0; i < n; i++)
    {
    cout << "\t" <<a[i];
    }
}