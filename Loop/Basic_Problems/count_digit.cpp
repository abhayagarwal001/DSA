#include<iostream>
using namespace std;

//count no. of digit in a given no.


//function to calculate digit in a number
int countDigit(int num)
{

int count=0;

while(num!=0)
{
    num=num/10;
    count++;
}

return count;

}

int main()
{
    int number;
    cout<<"Enter Number:";
    cin>>number;

    int digit=countDigit(number);
    cout<<"Number of Digit is: "<<digit;
    return 0;
}