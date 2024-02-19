#include<iostream>
using namespace std;
int main()
{
    int i,j,r;
    char alphabet='A';
    cout<<"\n enter number of rows:";
    cin>>r;
    for(i=1;i<=r;i++)
    {  
        for(j=1;j<=i;j++)
        {          
                cout<<"\t"<< alphabet++;   

        }
        
        cout<<"\n";
    }
}