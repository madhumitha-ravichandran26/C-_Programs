#include<iostream>
using namespace std;
int main ()
{
    char s[50];
    int i=0,ch=0,st=1;
    cout<<"enter the string:";
    gets(s);
    
    for(i=0;s[i]!='\0';i++)
    {
            ch=ch+1;
    }
    cout<<"\n no.of.characters the string:" << ch;

    for(i=0;i<=ch-1;i++)
    {
        if(s[i]==' ')
        {
            st=st+1;
        }

    }
    cout<<"\n no.of.words the string:"<< st;
}