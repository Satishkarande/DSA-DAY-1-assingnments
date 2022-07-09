//Two numbers are input through the keyboard into two
//locations C and D. Write a program to interchange the
//contents of C and D. 

#include<iostream>
using namespace std;
int main()
{
    int c,d;
cout<<endl<<"before the swaping ";
cout<<endl<<"enter the value in c :";
cin>>c;
cout<<endl<<"enter the value in d :";
cin>>d;
c=c+d;
d=c-d;
c=c-d;
cout<<endl<<"After the swaping ";

cout<<endl<<"the vaule in c:"<<c;
cout<<endl<<"the vaule in d:"<<d;

}

