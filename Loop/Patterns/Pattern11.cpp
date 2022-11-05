#include<iostream>
using namespace std;

/*
Pattern-11

    1
   121
  12321
 1234321

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
    value=1;
    for( int j=1;j<=space;j++)
    {    
     
     cout<<"  ";
       
    }

    for(int k=1;k<=digit;k++)
    {
       cout<<value<<" ";
       if(k<=digit/2)
       value++;
       else
       value--;
    }

    space--;
    digit+=2;
    cout<<endl;
}

return 0;

}