/*#########################################

enter a number :2211

After conversion, the temperature is 1210 Celsius..
##########################################*/
#include<iostream>
using namespace std;

    int main()
{
    int temp;
    float celsius;
    cout<<"\nenter a number :";
    cin>> temp;

    celsius = (temp - 32) / 1.8;

    cout<<"After conversion, the temperature is"<< celsius<<" Celsius..";
}

