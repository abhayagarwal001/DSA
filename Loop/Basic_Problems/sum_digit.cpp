#include<iostream>
using namespace std;

//calculate sum of digit in a given no.


//function to calculate sum of digit in a number
int sumDigit(int num)
{

int sum=0;

while(num!=0)
{   
    int lastdigit=num%10;
    sum=sum+lastdigit;
    num=num/10;
}

return sum;

}

int main()
{
    int number;
    cout<<"Enter Number:";
    cin>>number;

    int sum=sumDigit(number);
    cout<<"Sum of Digit is: "<<sum;
    return 0;
}