#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//check if we can partitioned the array into 2 subarray with equal sum. more formally check that prefix sum = sufix sum 


int totalSum(vector<int>&v)
{

int sum=0;

for( int i=0;i<v.size();i++)
{
    sum=sum+v[i];
}

return sum;

}





bool isSumEqual(vector<int>&v)
{
 int tsum=totalSum(v);
 int prefixSum=0;
 int suffixSum=0;

for(int i=0;i<v.size();i++)
{

prefixSum=prefixSum+v[i];
suffixSum=tsum-prefixSum;

if(prefixSum==suffixSum)
{
    return true;
}


}
return false;

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

bool ans=isSumEqual(arr);

if(ans)
cout<<"Yes array can be partitioned";
else
cout<<"No Partitioned";

return 0;

}