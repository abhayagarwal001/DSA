#include<iostream>
using namespace std;

//Reverse number

//function to reverse the number
void reverseNo(int num)
{

int reverse=0;

while(num!=0)
{
    int lastdigit=num%10;
    reverse=reverse*10+lastdigit;
    num=num/10;
   
}

cout<<"Reverse No: "<<reverse;

}

int main()
{
    int number;
    cout<<"Enter Number:";
    cin>>number;

    reverseNo(number);
   
    return 0;
}