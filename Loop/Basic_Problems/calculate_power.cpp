#include<iostream>
using namespace std;

//calculate a raise to power b

//function to calculate power
void calculatePower(int num,int pow)
{

int ans=1;

for(int i=1;i<=pow;i++)
{
    ans=ans*num;
}

cout<<num<<"^"<<pow<<" is "<<ans;

}

int main()
{
    int number;
    cout<<"Enter Number:";
    cin>>number;

    int power;
    cout<<"Enter Power:";
    cin>>power;


    calculatePower(number,power);
   
    return 0;
}