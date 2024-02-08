/*#############################################
enter a first number :22

 enter a second number:11

 enter a third number:19

The average of22 11 And 19 is 17
###############################################*/
#include<iostream>
using namespace std;

int main()
{
    int inumber1,inumber2,inumber3,total;
    float avg;

    cout<<"\nenter a first number :";
    cin>> inumber1;

    cout<<"\n enter a second number:";
    cin>> inumber2;

    cout<<"\n enter a third number:";
    cin>> inumber3;


    total=inumber1+inumber2+inumber3;
     avg=total/3;

    cout<<"\nThe average of"<<inumber1<<" "<<inumber2<<" And "<<inumber3 <<" is "<<avg;

}