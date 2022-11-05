#include<iostream>
#include<vector>
using namespace std;

//find last occurence of element x in given array

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

    int x;
    cout<<"Enter element:";
    cin>>x;
   
   int occurence=-1;
    
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
        {
            occurence=i;
            
         }
    }

cout<<"Last occurence of element at: "<<occurence;
    return 0;

}