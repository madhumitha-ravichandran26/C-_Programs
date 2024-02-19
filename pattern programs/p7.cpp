#include <iostream>
using namespace std;
int main()
{	
	int i,j;
	for(i=1; i<=5; i++)
	{
	for(j=5; j>=1; j--)
	{
		if(i>=j){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
		
	}
	cout<<"\n";
	}
}
