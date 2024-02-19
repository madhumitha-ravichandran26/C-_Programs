#include<iostream>
using namespace std;
int main ()
{
    int a[10],n,i,l,s;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "\n Enter the elements of the array : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }  
    l=s=a[0];
    for (i = 1; i < n; i++)
    {
    if(a[i]>l)
        l=a[i];
    if(a[i]<s)
        s=a[i];
    }
    cout << "\n Largest number : " << l;
    cout << "\n Smallest number : "<< s;
    return 0;
}