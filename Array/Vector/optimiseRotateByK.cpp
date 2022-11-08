#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



//rotate array by k steps 


void rotate(vector<int>v,int k)
{

//reverse complete array
reverse(v.begin(),v.end());

//reverse array till kth element
reverse(v.begin(),v.begin()+k);

//reverse remaining array
reverse(v.begin()+k,v.end());

cout<<"Rotated Array : ";

for(int e:v)
    {
        cout<<e<<" ";
    }
}


int main()
{
    
vector<int>v(5);
cout<<"Enter Element ";
for(int i=0;i<5;i++)
{
    cin>>v[i];
}

int k;
cout<<"Enter No of time to be rotated ";
cin>>k;

int size=v.size();

//as k is greater than size as well
k=k%size;;

rotate(v,k);


return 0;

}
