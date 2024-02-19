#include<iostream>
using namespace std;
int main ()
{
    int a[10], n, i,e=0,o=0;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "\n Enter the elements of the array : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }   
    for (i = 0; i < n; i++)
    {
    if(a[i]%2==0)
    {
      e++;
    }
    else{
        o++;
    }
    }
    cout << "\n Sum of even numbers:"<<e;  
    cout << "\n Sum of odd numbers:"<<o; 
}
