#include<iostream>
using namespace std;

//Print first n factorial number

//function to calculate  factorial of a no
void factorial(int num)
{

int fact=1;

for(int i=1;i<=num;i++)
{
    fact=fact*i;
    cout<<"Factorial of "<<i<<": "<<fact<<endl;
}

}

int main()
{
    int number;
    cout<<"Enter Number:";
    cin>>number;

    factorial(number);
   
    return 0;
}