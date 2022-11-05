#include<iostream>
using namespace std;

/*
Pattern-9

121212
212121
121212
212121

*/

int main()
{

int row;
cout<<"Enter No. Of Rows:";
cin>>row;

int column;
cout<<"Enter No. Of Column:";
cin>>column;

for(int i=1;i<=row;i++)
{   
    
    for( int j=1;j<=column;j++)
    {    
     
     if((i+j)%2==0)
     cout<<"1 ";
     else
     cout<<"2 ";
     
       
    }

    cout<<endl;
}

return 0;

}