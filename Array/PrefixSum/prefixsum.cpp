#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//given an integer array return the prefix sum/running sum in the same array without creating new array

void prefixSum(vector<int>&v)
{

int sum=0;

for( int i=0;i<v.size();i++)
{
    sum=sum+v[i];
    
    v[i]=sum;
    
}

}

int main()
{

int n;
cout<<"Enter total no of element:";
cin>>n;

vector<int>arr;
cout<<"Enter element:";

for(int i=0;i<n;i++)
{
    int ele;
    cin>>ele;
    arr.push_back(ele);
}

prefixSum(arr);

for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<" ";
}

return 0;

}