#include<iostream>
using namespace std;
int main()
{
    int x,y,t;
    cout<<"first number:";
    cin>>x;
    cout<<"second number:";
    cin>>y;
    t=x;
    x=y;
    y=t;  
    cout<<"\n Swapped numbers:"<< x<< "\t"<<y;
}

/* without third variable
a= a+b;
b=a-b;
a=a-b;
*/