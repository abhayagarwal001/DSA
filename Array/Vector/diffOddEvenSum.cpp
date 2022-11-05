#include<iostream>
#include<vector>
using namespace std;

//calculate the difference b/w sum of element at even indices to sum of odd indices

int main()
{

    //declare vector
    vector<int>v;
    
    cout<<"Enter Element: ";
    //input element
    for(int i=0;i<6;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    } 

    int sum=0;
    
    for(int i=0;i<v.size();i++)
    {
        if(i%2==0)
        {
            sum=sum+v[i];
            
        }

        else
        {
            sum=sum-v[i];
        }
    }

cout<<"Diff. b/w Even and Odd Sum is: "<<sum;
    return 0;

}