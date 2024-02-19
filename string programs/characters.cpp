#include<iostream>
using namespace std;
int main ()
{
    string s;
    char ch;
    int i,n;
    cout<<"enter the string:";
    cin>>s;
    n=s.length();
    cout<<"enter the character to be searched:";
    cin>>ch;
    for(i=0;i<n&&s[i]!=ch;i++)
    {
        if(i<n)   
        {
            cout<<"character is present";
        }
        else
        {
            cout<<"character is not present";
        }
    }
}