#include<iostream>
using namespace std;
int main()
{
    int n,e,r=0;
    cout<<"\n Enter n value:";
    cin>>n;
    while(n>0)
    {
        e=r*10;
        r=e+n%10;
        n=n/10;
    }
    cout<<"\n reverse number:"<< r;
}