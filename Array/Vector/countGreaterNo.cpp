#include<iostream>
#include<vector>
using namespace std;

//count no of element strictly greater than value x

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
   
   int count=0;
    
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>x)
        {
            count++;
            
         }
    }

cout<<"Count of no of greater element than "<<x<<" is "<<count;
    return 0;

}