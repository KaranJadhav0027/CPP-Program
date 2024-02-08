/*#############################################
enter first number33

 enter second number77

Before swapping,the first number is 33 & second numnber is 77
After swapping,the first number is 77 &  second numnber is 33
##############################################*/
#include<iostream>
using namespace std;
 
 int main()
 { 
     int inumber1,inumber2;

    cout<<"\n enter first number";
    cin>>inumber1;

    cout<<"\n enter second number";
    cin>>inumber2;
     
     cout<<"\nBefore swapping,the first number is "<< inumber1 <<" &"<<" second numnber is"<< inumber2;
       inumber1=inumber1+inumber2;

     inumber2=inumber1-inumber2;

     inumber1=inumber1-inumber2;


    cout<<"\nAfter swapping,the first number is "<< inumber1 <<" & "<<" second numnber is"<< inumber2;
 }