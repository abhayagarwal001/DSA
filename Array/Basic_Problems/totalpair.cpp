#include<iostream>
using namespace std;

//find total no of pair in array whose sum is equal to x

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

   int x;
   cout<<"Enter value";
   cin>>x;

int count=0;

   for(int i=0;i<size;i++)
   {
    for(int j=i+1;j<size;j++)
    {
        if(arr[i]+arr[j]==x)
        count++;
    }
   }

   cout<<"Total pair is: "<<count;

  return 0;


}