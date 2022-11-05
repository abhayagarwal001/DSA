#include<iostream>
#include<math.h>
using namespace std;

//conversion of binary no into decimal number system

//function to convert binary into decimal

void binaryToDecimal(int binaryno)
{
    
   int sum=0;
    int power=0;

while(binaryno!=0)
{
    int lastdigit=binaryno%10;
    sum=sum+lastdigit*pow(2,power);
    power++;
    binaryno=binaryno/10;
}

cout<<"Decimal Conversion is: "<<sum;

}

int main()
{
    int binaryNo;
    cout<<"Enter Binary NO:";
    cin>>binaryNo;

    binaryToDecimal(binaryNo);

    return 0;
}