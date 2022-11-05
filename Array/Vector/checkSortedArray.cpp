#include<iostream>
#include<vector>
using namespace std;

//count no of element strictly greater than value x

int main()
{

    //declare + initialize vector
    vector<int>v={2,4,6,1,9,13};

    bool issort=true;
    
    for(int i=1;i<v.size();i++)
    {
        if(v[i]<v[i-1])
        {
            issort=false;
            break;
            
         }
    }


if(issort)
cout<<"Sorted";
else
cout<<"Not Sorted";

    return 0;

}