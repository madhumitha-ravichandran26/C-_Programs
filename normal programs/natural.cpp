#include<iostream>
using namespace std;
int main()
{
    int i,n,s=0;
    cout<<"\n Enter n value:";
    cin>>n;
    i=1;
    while(i<=n)
    {
        s=s+i;
        i++;
    }
    cout<<"\n sum of the "<< n<< "natural numbers is:"<< s;
}