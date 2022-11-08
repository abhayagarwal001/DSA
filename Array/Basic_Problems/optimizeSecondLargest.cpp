#include<iostream>
using namespace std;
#include<climits>


int secondlargest(int *arr,int size)
{

int max=INT_MIN;
int secmax=INT_MIN;

for(int i=0;i<size;i++)
{
    if(arr[i]>max)
    max=arr[i];
}

for(int i=0;i<size;i++)
{
    if(arr[i]>secmax && arr[i]!=max)
    secmax=arr[i];
}

return secmax;
}


int main()
{

int arr[]={2,3,5,7,6,1};


int size=sizeof(arr)/sizeof(arr[0]);



cout<<"Second Largest Element is: "<<secondlargest(arr,size);

return 0;
}


