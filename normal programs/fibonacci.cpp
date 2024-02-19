#include<iostream>
using namespace std;
int main()
{
    int a=-1,b=1,c,i,n;
    cout<<"\n Enter n value:";
    cin>>n;
    for(i=1;i<n;i++)
    {
        c=a+b;
        cout<<"\n"<<c;
        a=b;
        b=c;
   }
      
}