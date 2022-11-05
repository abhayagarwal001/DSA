#include<iostream>
using namespace std;

//search an element in unsorted array

//function for search element in array
int linearSearch(int *arr,int size,int search)
{

for(int i=0;i<size;i++)
{
    if(arr[i]==search)
    return i;
}
return -1;
}

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

    int search;
    cout<<"Enter element to search:";
    cin>>search;
   
     int index=linearSearch(arr,size,search);
     
     if(index>0)
     cout<<"Element present at index:"<<index;
     else
     cout<<"Element not present :"<<index;
  return 0;


}