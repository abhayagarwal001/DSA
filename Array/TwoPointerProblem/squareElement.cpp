#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//given an integer array sorted in non decreasing order return an array of square of each eleemnt in non decreasing order


void  getSquare(vector<int>&v)
{   

    vector<int>newV;
     
     int left=0;
     int right=v.size()-1;

     while(left<=right)
     {
        if(abs(v[left])<abs(v[right]))
        {
        newV.push_back(v[right]*v[right]);
        right--;
        }

        else{
            newV.push_back(v[left]*v[left]);
            left++;
        }
        
     }
    
    reverse(newV.begin(),newV.end());
    
    for(int e: newV)
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



getSquare(arr);

return 0;

}