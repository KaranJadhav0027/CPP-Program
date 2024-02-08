/*################################################
enter a kilometres per hour: 22

The 22 kilometres is  13.6702 miles per hour
###################################################*/
#include<iostream>
using namespace std;

int main()
{
    float kmph,mlph;

    cout<<"\nenter a kilometres per hour: ";
    cin>> kmph;

  mlph=(kmph*0.6213712);

    cout<<"The "<<kmph<<"  kilometres is  "<< mlph<<" miles per hour ";
}
