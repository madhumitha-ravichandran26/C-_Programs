#include<iostream>
using namespace std;
int main()
{
    int i,j,k,r;
    cout<<"\n enter number of rows:";
    cin>>r;
    for(i=r;i>=1; i--)
    {
        for(j=1; j<=r-i; j++)
        {          
            cout<<" "; 
        }
        for(k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
}