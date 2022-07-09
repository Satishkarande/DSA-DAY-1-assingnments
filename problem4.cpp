//Temperature of a city in Fahrenheit degrees is input through
//the keyboard. Write a program to convert this temperature
//into Centigrade degrees.

#include <iostream>
using namespace std;
int main()
{
float f,c;
cout<<endl<<"enter the temprature in F :";
cin>>f;
c=(float)(f-32)/1.8;
cout<<endl<<"the temprature in C is :"<<c;
return 0;


}