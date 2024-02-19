#include<iostream>
using namespace std;
int main()
{
    int i,j,r;
    cout<<"\n enter number of rows:";
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=i;j>=1;j--)
        {          
                cout<<"\t"<<j;       
        }
        cout<<"\n";

    }
}
