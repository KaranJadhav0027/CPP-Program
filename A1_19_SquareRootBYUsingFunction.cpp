/*#############################################
Enter the base :25

The Square Root 25 is:5
###############################################*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int base,root;

    cout<<"\nEnter the base :";
    cin>> base;

   root=sqrt(base);
    
    cout<<"The Square Root "<<base<<" is:"<<root;
}