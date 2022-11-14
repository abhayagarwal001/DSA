#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//given an integer array of n size. Answer q queries where u need to print sum of value in  range of indices from l to r(both include>)

void prefixSum(vector<int>&v)
{

int prefix_sum=0;

for(int i=1;i<=v.size();i++)
{
prefix_sum=prefix_sum+v[i];
v[i]=prefix_sum;
}




}


int main()
{

int n;
cout<<"Enter total no of element:";
cin>>n;

vector<int>arr(n+1,0);
cout<<"Enter element:";

for(int i=1;i<=n;i++)
{
   cin>>arr[i];
}

prefixSum(arr);


int q;
cout<<"Enter queries:";
cin>>q;

while(q--)
{

int l,r;
cout<<"Enter l and r value:";
cin>>l>>r;

int ans=arr[r]-arr[l-1];
cout<<ans<<" ";
}



return 0;

}