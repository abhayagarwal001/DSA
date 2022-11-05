#include<iostream>
#include<math.h>
using namespace std;

//conversion of decimal no into binary number system

//function to convert decimal into binary

void decimalToBinary(int decimalno)
{

int sum=0;
int power=0;
  while(decimalno!=0)
  {
  int remainder=decimalno%2;
  decimalno=decimalno/2;
  sum=sum+remainder*pow(10,power);
  power++;
  }
  
cout<<"Binary Conversion is: "<<sum;

  }  
  

int main()
{
    int decimalNo;
    cout<<"Enter Decimal NO:";
    cin>>decimalNo;
    decimalToBinary(decimalNo);

    return 0;
}