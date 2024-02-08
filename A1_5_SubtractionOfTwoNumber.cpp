/*########################################
enter a first number :42

 enter a second number:7

The Subtractrion of 42 And 7 is 35
##########################################*/
#include<iostream>
using namespace std;

int main()
{
    int inumber1,inumber2,sub;

    cout<<"\nenter a first number :";
    cin>> inumber1;

    cout<<"\n enter a second number:";
    cin>> inumber2;

    sub=inumber1-inumber2;

    cout<<"\nThe Subtractrion of "<<inumber1<<" And "<<inumber2<<" is "<<sub;

}