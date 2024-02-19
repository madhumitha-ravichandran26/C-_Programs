#include<iostream>
using namespace std;
int main()
{
    int i, j, r,k;
    r=5;
//up triangle
    for(i=1; i<=r; i++)
    {
        for(k=r-i; k>0; k--){            
            cout<<" ";
        }
        for(j=1; j<=i; j++){            
            cout<<"* ";
        }
        cout<<"\n";
    }
//down triangle

        for(i=r; i>=1; i--)
    {
        for(k=r-i; k>0; k--){            
            cout<<" ";
        }
        for(j=i; j>=1; j--){            
            cout<<"* ";
        }
        cout<<"\n";
    }
} 