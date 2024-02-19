#include<iostream>
using namespace std;
int main()
{
    int i,n,f=1;
    cout<<"\n Enter n value:";
    cin>>n;
    i=1;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    cout<<"\n factorial of the "<< n <<" is "<< f;
}