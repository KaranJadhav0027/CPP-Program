/*#####################################
enter the width of rectangle 22

enter the height of rectangle 11

perimeter of Rectangele is 66
######################################*/
#include<iostream>
using namespace std;
int main()
{
    int width,length;
    float per;

    cout<<"\nenter the width of rectangle ";
    cin>>width;

    cout<<"\nenter the length of rectangle ";
    cin>>length;

    per=(width+length)*2;

    cout<<"\nperimeter of Rectangele is  "<<per;
    return 0; 
}