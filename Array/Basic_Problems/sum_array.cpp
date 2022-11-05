#include<iostream>
using namespace std;

//sum of element of array

int main()
{
    
    int size;
    cout<<"Enter size of Array:";
    cin>>size;

    int arr[size];
   
   cout<<"Enter Element:";
   //input array element
   for(int &element:arr)
   {
    cin>>element;
   } 

   int sum=0;

//calculate sum
   for(int i=0;i<size;i++)
   {
    sum=sum+arr[i];
   }

  cout<<"Sum of element of array is: "<<sum;

  return 0;


}