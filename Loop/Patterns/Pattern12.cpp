#include<iostream>
using namespace std;

/*
Pattern-12

    1
   2 2
  3   3
 4444444

*/

int main()
{

int row;
cout<<"Enter No. Of Rows:";
cin>>row;

int col=row*2-1;

int space=row-1;
int digit=1;
int value;

for(int i=1;i<=row;i++)
{   
    value=i;
    for( int j=1;j<=space;j++)
    {    
     
     cout<<"  ";
       
    }

    for(int k=1;k<=digit;k++)
    {  
       if(k==1 || k==digit || i==row)
       cout<<value<<" ";
       else
       cout<<"  ";
       
    }

    space--;
    digit+=2;
    cout<<endl;
}

return 0;

}