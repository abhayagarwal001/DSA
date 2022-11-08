#include<iostream>
using namespace std;

//find unique element in a array where all element are being repeated twice with one value is unique

int main()
{


int arr[]={2,3,1,3,2,4,1};

int size=sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<size;i++)
{
    for(int j=i+1;j<size;j++)
    {
        if(arr[i]==arr[j])
        {
            arr[i]=arr[j]=-1;
        }
    }
}

int unique=0;
for(int i=0;i<size;i++)
{
    if(arr[i]>0)
    unique=arr[i];
}

cout<<"Unique element is: "<<unique;
return 0;




}    