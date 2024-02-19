#include<iostream>
using namespace std;
int main()
{
    int i,n,s=0;
    cout<<"\n Enter n value:";
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
        s=s+i;
        }
   }
   if(s==n)
   {
    cout<<"perfect";
   }
   else
   {
    cout<<"not perfect";
   }
    
}