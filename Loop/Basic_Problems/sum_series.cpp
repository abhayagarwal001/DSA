#include<iostream>
using namespace std;

//find sum of series S=1-2+3-4 ------------ n



int main()
{
    int number;
    cout<<"Enter Number:";
    cin>>number;

    int sum=0;

    for(int i=1;i<=number;i++)
    {
        if(i%2!=0)
        sum=sum+i;
        else
        sum=sum-i;
    }

    cout<<"Sum of given Series is: "<<sum;
   
    return 0;
}