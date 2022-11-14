#include<iostream>
#include<vector>
using namespace std;


//given array 'a' move all even integer at beginning and odd at end . relative order not matter of even odd
//12345 ----> 42315

void sortEvenOdd(vector<int>&v)
{

int left=0;
int right=v.size()-1;

while(left<right)
{
    if(v[left]%2==1 && v[right]%2==0)
    {
        swap(v[left],v[right]);
        left++;
        right--;
    }
     
     if(v[left]%2==0)
     left++;

     if(v[right]%2!=0)
     right--;

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


sortEvenOdd(arr);
display(arr);



return 0;




}