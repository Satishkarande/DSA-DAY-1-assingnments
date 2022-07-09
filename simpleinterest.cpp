#include<iostream>
using namespace std;
int main()
{
    int f,p,t,r,a;
    
    cout<<endl<<"enter the priniciple amt:";
    cin>>p;
    cout<<endl<<"enter the rate of interest:";
    cin>>r;
    cout<<endl<<"enter the duration:";
    cin>>t;

    f=p*r*t/100;
    cout<<endl<<"simple intertest is:"<<f;
    a=f+p;
    cout<<endl<<"total amount is :"<<a;

    return 0;

}