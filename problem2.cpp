//The distance between two cities (in km.) is input through the//
//keyboard Write a program to convert and print this distance//
//in meters, feet, inches and centimeters. //

#include <iostream>
using namespace std;
int main ()
{
    int km,me,cm;
    float ft,in;
    cout<<endl<<"enter the distance in km:";
    cin>>km;
    me=km*1000;
    cout<<endl<<"the distance in meter is:"<<me;
    ft=km*3280.84;
    cout<<endl<<"the distance in ft is:"<<ft;
    in=km*39370.1;
    cout<<endl<<"the distance in inch is:"<<in;
    cm=km*1000000;
    cout<<endl<<"the distance in cm is:"<<cm;

    return 0;
    

}