#include<iostream>
using namespace std;
int main ()
{
    int a[10], n, i, s= 0,p=1;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "\nEnter the elements of the array : ";
    for (i = 0; i < n; i++){
    cin >> a[i];
    }
    
    for (i = 0; i < n; i++)
    {
        s =s+a[i];
        p =p*a[i];
    }
    cout << "\n Sum of array elements : " << s;
    cout << "\n Product of array elements : " << p;

}