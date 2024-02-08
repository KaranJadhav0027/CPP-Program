/*###############################################
enter five subject marks 95 76 85 90 89

Tota=435
Average=87
Percentage=87
################################################*/
#include<iostream>
using namespace std;

int main()
{
    int s1,s2,s3,s4,s5;
     float total,per,avg;
    cout<<"\nenter five subject marks";
    cin>>s1>>s2>>s3>>s4>>s5;
   
    total=s1+s2+s3+s4+s5;

    avg=total/5;

     per=(total/500)*100;

     cout<<"\nTota="<<total;

     cout<<"\nAverage="<<avg;

     cout<<"\nPercentage="<<per;
}