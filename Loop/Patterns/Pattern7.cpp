#include<iostream>
using namespace std;

/*
Pattern-7

123456
123456
123456
123456

*/

int main()
{

int row;
cout<<"Enter No. Of Rows:";
cin>>row;

int col=row;

for(int i=1;i<=row;i++)
{   
    
    for( int j=1;j<=col;j++)
    {    
     
     cout<<j<<" ";
     
       
    }

    cout<<endl;
}

return 0;

}