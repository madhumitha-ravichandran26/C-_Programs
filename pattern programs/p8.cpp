#include <iostream>
using namespace std;
int main()
{	
	int i,j,k;
	for(i=5; i>=1; i--)
	{
	for(k=5-i;k>0; k--)
            cout<<" ";
    for(j=i;j>0;j--){
         cout<<"*";
    }
	cout<<"\n";
	}
}
