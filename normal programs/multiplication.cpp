#include<iostream>
using namespace std;
int main()
{
    int i,j,n,s=0,k;
    cout<<"\n Enter n value:"; 
    cin>>n;
    cout<<"\n Enter the limit:";
    cin>>j;
    cout<<"\n MULTIPLICATION TABLE OF "<< n <<":";
    for(i=1;i<=j;i++)
    {
    k=n*i;
    cout<<"\n"<<n<<"x"<<i<<"="<< k;
    }
    
}