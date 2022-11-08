#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Given Q Queries check if the given no is present in array or not and print total no of count if present.     Value of all element in arrya is less than 10^5

int main()
{

vector<int>v(5);

cout<<"Enter Element ";
for(int i=0;i<5;i++)
{
    cin>>v[i];
}

const int N= 1e5 + 10;
vector<int>freq(N,0);

for(int i=0;i<v.size();i++)
{
    freq[v[i]]++;
}

int queries;
cout<<"Enter No of Queries:";
cin>>queries;



while(queries--)
{
    int ele;
    cin>>ele;
    cout<<freq[ele]<<"No of time present"<<endl;


}

return 0;


}