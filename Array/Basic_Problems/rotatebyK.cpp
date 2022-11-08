#include<iostream>
using namespace std;
#include<climits>

//rotate array by k steps 



int main()
{

int arr[]={1,2,3,4,5};


int size=sizeof(arr)/sizeof(arr[0]);

int k;
cout<<"Enter No of time to be rotated ";
cin>>k;

//as k is greater than size as well
k=k%size;

int newarr[size];
int j=0;

for(int i=size-k;i<size;i++)
{
    newarr[j]=arr[i];
    j++;
}

for(int i=0;i<size-k;i++)
{
    newarr[j]=arr[i];
    j++;
}




cout<<"Rotated Array is ";
for(int i=0;i<size;i++)
{
    cout<<newarr[i]<<" ";
}

return 0;
}


