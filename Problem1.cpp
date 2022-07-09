// Ramesh’s basic salary is input through the keyboard. His//
//dearness allowance is 40% of basic salary, and house rent//
//allowance is 20% of basic salary. Write a program to calculate//
//his gross salary.//

#include <iostream>
using namespace std;
int main ()
{
    int bs,da,hr,gs;
    cout<<endl<<"Enter the basic salary of the ramesh:";
    cin>>bs;
    da=bs*(float)40/100;
    cout<<endl<<"dearness allownace is :"<<da;
    hr=bs*(float)20/100;
    cout<<endl<<"rent allownace is :"<<hr;
    gs=bs+da+hr;
    cout<<endl<<"gross salary of ramesh is :"<<gs;

    return 0;
    



}