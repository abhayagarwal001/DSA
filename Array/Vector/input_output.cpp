#include<iostream>
#include<vector>
using namespace std;

//create vector and take input from user and display the values as an output

int main()
{

    //declare vector
    vector<int>v;
    
    cout<<"Enter Element: ";
    //input element
    for(int i=0;i<5;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    } 

    //display element
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;

}