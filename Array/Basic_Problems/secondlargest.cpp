#include<iostream>
using namespace std;
#include<climits>


int largest(int *arr,int size)
{

int max=INT_MIN;

for(int i=0;i<size;i++)
{
    if(arr[i]>max)
    max=arr[i];
}

return max;
}


int main()
{

int arr[]={2,3,5,7,7,7};


int size=sizeof(arr)/sizeof(arr[0]);

int largestele=largest(arr,size);

for(int i=0;i<size;i++)
{
    if(arr[i]==largestele)
    arr[i]=-1;
}

int secondlargest=largest(arr,size);

cout<<"Second Largest Element is: "<<secondlargest;

return 0;
}


