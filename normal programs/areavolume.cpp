#include<iostream>
using namespace std;
int main()
{   
    int o;
    float a,r,b,h,sq,ci,tr,cu,sp,co;
    char c;
    cout<<"\n Enter the case:";
    cin>>c;
    switch (c)
    {
    case 'A': cout<<"\n 1-square";
              cout<<"\n 2-circle";
              cout<<"\n 3-triangle";
              cout<<"\n Enter the option:";
              cin>>o;
              if(o==1){
                cout<<"\n Enter value of a:";
                cin>>a;
                sq=a*a;
                cout<<"\n Area of square:"<< sq;
              }
              else if(o==2){
                cout<<"\n Enter value of r:";
                cin>>r;
                ci=3.14*r*r;
                cout<<"\n Area of circle:"<< ci;
              }
              else if(o==3){
                cout<<"\n Enter value of b:";
                cin>>b;
                cout<<"\n Enter value of h:";
                cin>>h;
                tr=0.5*b*h;
                cout<<"\n Area of triangle:"<< tr;
              }
              else{
                cout<<"\n Invalid Area";
              }
        break;
    case 'V': cout<<"\n 1-cube";
              cout<<"\n 2-sphere";
              cout<<"\n 3-cone";
              cout<<"\n Enter the option:";
              cin>>o;
              if(o==1){
                cout<<"\n Enter value of a:";
                cin>>a;
                cu=a*a*a;
                cout<<"\n Volume of cube:"<< cu;
              }
              else if(o==2){
                cout<<"\n Enter value of r:";
                cin>>r;
                sp=0.75*3.14*r*r*r;
                cout<<"\n Volume of sphere:"<< sp;
              }
              else if(o==3){
                cout<<"\n Enter value of r:";
                cin>>b;
                cout<<"\n Enter value of h:";
                cin>>h;
                co=0.33*3.14*r*r*h;
                cout<<"\n Volume of cone:"<< co;
              }
              else{
                cout<<"\n Invalid Volume";
              }
        break;
    
    default: cout<<"\n Invalid option";
        break;
    }
 
}