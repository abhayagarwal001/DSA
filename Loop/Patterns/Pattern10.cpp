#include<iostream>
using namespace std;

/*
Pattern-10

1
12
123
1234

*/

int main()
{

int row;
cout<<"Enter No. Of Rows:";
cin>>row;


for(int i=1;i<=row;i++)
{   
    
    for( int j=1;j<=i;j++)
    {    
     
     cout<<j<<" ";
     
       
    }

    cout<<endl;
}

return 0;

}