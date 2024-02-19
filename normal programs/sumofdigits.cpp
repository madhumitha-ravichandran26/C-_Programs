#include<iostream>
using namespace std;
int main()
{
    int r,n,s=0;
    cout<<"\n Enter n value:";
    cin>>n;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    cout<<"\n sum of the digits:"<< s;
}