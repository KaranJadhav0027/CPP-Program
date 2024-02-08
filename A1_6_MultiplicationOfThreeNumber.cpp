/*###########################################
enter a first number :2

 enter a second number:4

 enter a third number:5

The Multiplication of 2 4 And 5 is 40
#############################################*/
#include<iostream>
using namespace std;

int main()
{
    int inumber1,inumber2,inumber3,result;

    cout<<"\nenter a first number :";
    cin>> inumber1;

    cout<<"\n enter a second number:";
    cin>> inumber2;

    cout<<"\n enter a third number:";
    cin>> inumber3;


    result=inumber1*inumber2*inumber3;

    cout<<"\nThe Multiplication of "<<inumber1<<" "<<inumber2<<" And "<<inumber3 <<" is "<<result;

}