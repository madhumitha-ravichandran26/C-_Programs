#include<iostream>
using namespace std;
int main()
{
    int i,j,k=1,r,s;
    cout<<"\n enter number of rows:";
    cin>>r;
    for(i=0;i<r; i++)
    {
        for(s=1; s<=r-i; s++)
        {          
            cout<<" "; 
        }
        for(j=0; j<=i; j++)
        {      
            if(j==0||i==0)       
                k=1;
            else 
            k=k*(i-j+1)/j; 
                cout<<k << " "; 
        }
        cout<<"\n";
    }
    
}