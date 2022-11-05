#include<iostream>
using namespace std;

/*
Pattern-6

1234567
2345671
3456712
4567123
5671234
6712345
7123456 

*/

int main()
{

int row;
cout<<"Enter No. Of Rows:";
cin>>row;

int col=row;

for(int i=1;i<=row;i++)
{   
    
    for( int j=i;j<=col;j++)
    {    
     
     cout<<j<<" ";
     
       
    }

    for(int k=1;k<=i-1;k++)
    {
        
        cout<<k<<" ";
       
    }

    cout<<endl;
}

return 0;

}