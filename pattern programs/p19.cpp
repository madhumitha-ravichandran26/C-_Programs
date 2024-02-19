#include<iostream>
using namespace std;
int main()
{
    int i, j, r;
    cout<<"\n enter number of rows:";
    cin>>r;
    for(i=0; i<r; i++)
    {
        for(j=0; j<r; j++)
        {
            
               cout<<((j+i)%2)<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}