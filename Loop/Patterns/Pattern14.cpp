#include<iostream>
using namespace std;

/*
Pattern-14

   *
   *
 *****
   *
   *  

*/

int main()
{

int row;
cout<<"Enter No. Of Rows:";
cin>>row;

int col=row;



for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
       if(j==col/2 ||i==row/2 )
       cout<<"* ";
       else
       cout<<"  ";
    }
    cout<<endl;
}


return 0;

}