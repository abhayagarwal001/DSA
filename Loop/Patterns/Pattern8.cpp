#include<iostream>
using namespace std;

/*
Pattern-8

123456
1    6
1    6
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
     
     if(i==1 || i==row || j==1 || j==col)
     cout<<j<<" ";

     else
     cout<<"  ";
     
       
    }

    cout<<endl;
}

return 0;

}