#include<iostream>
using namespace std;
int main()
{
    int x;
    string res;
    cout<<"Enter a number:";
    cin>>x;
    res=(x>0)?"Positive number":"Negative number";
    cout<<res;
}