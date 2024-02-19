#include<iostream>
using namespace std;
int main()
{
    int r,n,t,s=0;
    cout<<"\n Enter n value:";
    cin>>n;
    t=n;
    while(n>0)
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(t==s){
        cout<<"armstrong number";
    }
    else{
        cout<<"not armstrong number";
    }
}