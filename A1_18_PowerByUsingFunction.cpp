/*########################################
Enter the base :5

Enter the exponent:2

The number is:25
##########################################*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int base,exponent;

    cout<<"\nEnter the base :";
    cin>> base;

    cout<<"\nEnter the exponent:";
    cin>> exponent;

    int power=pow(base,exponent);

    cout<<"The number is:"<<power;
}
