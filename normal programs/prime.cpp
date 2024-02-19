#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"\n Enter n value:";
    cin>>n;
if(n==1){
    cout<<"neither prime nor composite";
}
    else if(n>1){
        for(i=2;i<n;i++){
            if(n%i!=0){
                cout<<"prime";
                
            }
            else{
                cout<<"not prime";
                
            }
        }
    }
else{
 cout<<"invalid";
}
}