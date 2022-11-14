#include<iostream>
#include<vector>
using namespace std;


//Sort an array consisting of only 0's and 1's
//11001010 ----> 00001111

//2 traverse (naive approach):count no of zeros and put at starting of array 
void sortZeroOne(vector<int>&v)
{

int zerocount=0;

for(int i=0;i<v.size();i++)
{
    if(v[i]==0)
    zerocount++;
}

for(int j=0;j<v.size();j++)
{
    if(j<zerocount)
    v[j]=0;
    else
    v[j]=1;
}

}



//1 traverse (optimise approach):two pointer approach
void sortZeroOneOptimize(vector<int>&v)
{

int left=0;
int right=v.size()-1;

while(left<right)
{
    if(v[left]==1 && v[right]==0)
    {

        v[left]=0;
        v[right]=1;
        left++;
        right--;
    }

     if(v[left]==0)
     {
       left++;
     }

     if(v[right]==1)
     {
        right--;
     }


}

}

void display(vector<int>&v)
{
    for(int e:v)
    {
        cout<<e<<" ";
    }
}


int main()
{

int n;
cout<<"Enter total no of element:";
cin>>n;

vector<int>arr;
cout<<"Enter element";

for(int i=0;i<n;i++)
{
    int ele;
    cin>>ele;
    arr.push_back(ele);
}


sortZeroOneOptimize(arr);
display(arr);



return 0;




}