/*##############################################
  enter a first number :45

  enter a second number:55

  The Addition of 45 And 55 is 100
################################################*/
#include<iostream>
using namespace std;

int main()
{
    int inumber1,inumber2,sum;

    cout<<"\nenter a first number :";
    cin>> inumber1;

    cout<<"\n enter a second number:";
    cin>> inumber2;

    sum=inumber1+inumber2;

    cout<<"\nThe Addition of "<<inumber1<<" And "<<inumber2<<" is "<<sum;

}