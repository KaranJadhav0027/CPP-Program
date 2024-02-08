/*#################################################
enter a first number :56

enter a second number:8

The Division of 56 And 8 is 7
###################################################*/
#include<iostream>
using namespace std;

int main()
{
    int inumber1,inumber2,div;

    cout<<"\nenter a first number :";
    cin>> inumber1;

    cout<<"\n enter a second number:";
    cin>> inumber2;

    div=inumber1/inumber2;

    cout<<"\nThe Division of "<<inumber1<<" And "<<inumber2<<" is "<<div;

}