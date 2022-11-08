#include<iostream>
using namespace std;

//count no of triplets  whose sum is equal to x

int main()
{
    
    int arr[]={3,1,2,4,0,6};
    int sum=6;
    int size=sizeof(arr)/sizeof(arr[0]);

int count=0;

   for(int i=0;i<size;i++)
   {
    for(int j=i+1;j<size;j++)
    {
        for(int k=j+1;k<size;k++)
        {
        if(arr[i]+arr[j]+arr[k]==sum) 
        count++;
        }
    }
   }

   cout<<"Total Triplet is: "<<count;

  return 0;


}