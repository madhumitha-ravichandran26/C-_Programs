#include<iostream>
using namespace std;
int main ()
{
    char str[80],sub[10];
    int i,j,c1=0,c2=0,f;
    cout<<"enter the string:";
    gets(str);
    cout<<"enter the substring to be searched:";
    gets(sub); 
    while(str[c1] !='\0')
        c1++;
    while(sub[c2] != '\0')
        c2++;
    for(i = 0; i <= c1 - c2; i++)
    {
        for (j = i; j < i + c2; j++)
        {
            f = 1;
            if (str[j] != sub[j - i])
            {
                f = 0;
                break;
            }
        }
        if (f == 1)
            break;
    }
    if (f == 1)
        cout<<"found";
    else
        cout<<"not found";

}