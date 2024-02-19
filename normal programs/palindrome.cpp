#include<iostream>
using namespace std;
int main()
{
    int n,r=0,t,e;
    cout<<"\n Enter n value:";
    cin>>n;
    t=n;
    while(n>0)
    {
        e=r*10;
        r=e+n%10;
        n=n/10;
    }
    if(t==r)
    {
        cout<<"\n palindrome";
    }
    else
    {
        cout<<"\n not palindrome";
    }
    
}