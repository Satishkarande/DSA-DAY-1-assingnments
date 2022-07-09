//The length & breadth of a rectangle and radius of a circle are
//input through the keyboard. Write a program to calculate the
//area & perimeter of the rectangle, and the area &
//circumference of the circle.

#include<iostream>
using namespace std;
int main()
{

    int l,b,a,p;
    float r,ac,cc;
cout<<endl<<"enter the lenght of the rect:";
cin>>l;

cout<<endl<<"enter the breath of the rect:";
cin>>b;

a=l*b;
cout<<endl<<"area of the rect:"<<a;

p=2*(l+b);
cout<<endl<<"perimeter of the rect:"<<p;

cout<<endl<<"enter the radius of the circle:";
cin>>r;

ac=3.14*r;
cout<<endl<<"area of the circle:"<<ac;
cc=2*3.14*r;
cout<<endl<<"circumferance  of the circle:"<<cc;

return 0;

}