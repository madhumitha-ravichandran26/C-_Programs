#include<iostream>
using namespace std;
int main()
{
    int i, j, r;
    cout<<"\n enter number of rows:";
    cin>>r;
    for(i=1; i<=r; i++)
    {
        for(j=r; j>=1; j--){
            if(i>=j)
            {
            cout<<"* ";
            }
            else{
            cout<<" ";
            }
        }
        cout<<"\n";
    }
    
}