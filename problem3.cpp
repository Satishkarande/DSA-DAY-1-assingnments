//If the marks obtained by a student in five different subjects//
//are input through the keyboard, find out the aggregate marks//
//and percentage marks obtained by the student. Assume that//
//the maximum marks that can be obtained by a student in each
//subject is 100.//

#include <iostream>
using namespace std;
int main()
{
    int mt,sc,mr,en,hs,tm;
    float pr;
    cout<<endl<<"enter the marks in maths :";
    cin>>mt;
    cout<<endl<<"enter the marks in marathi :";
    cin>>mr;
    cout<<endl<<"enter the marks in science :";
    cin>>sc;
    cout<<endl<<"enter the marks in english :";
    cin>>en;
    cout<<endl<<"enter the marks in history :";
    cin>>hs;

    tm=mt+sc+mr+en+hs;
    cout<<endl<<"total marks obtained = "<<tm;

    pr=100*(float)tm/500;

    cout<<endl<<"percentage obtained = "<<pr;

    return 0;


    
    


    

}
