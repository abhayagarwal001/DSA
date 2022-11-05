#include<iostream>
using namespace std;

//finf max element in array

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

   int max=arr[0];

//calculate sum
   for(int i=0;i<size;i++)
   {
    if(arr[i]>max)
    max=arr[i];
   }

  cout<<"Max element in array is: "<<max;

  return 0;


}