#include<iostream>
using namespace std;
int main()
{
    int i,j,r;
    char alphabet;  
    cout<<"\n enter number of rows:";
    cin>>r;
    for(i=1;i<=r;i++)
    {
        alphabet='A';
        for(j=1;j<=i;j++)
        {          
                cout<<"\t"<< alphabet++;        
        }
        cout<<"\n";
    }
}