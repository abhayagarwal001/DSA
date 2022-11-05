#include<iostream>
using namespace std;

/*
Pattern-2

******
*    *
*    *
******

*/

int main()
{

int row;
cout<<"Enter No. Of Rows:";
cin>>row;

int column;
cout<<"Enter No. Of Column:";
cin>>column;

for(int i=0;i<row;i++)
{
    for(int j=0;j<column;j++)
    {
        if(i==0 || i==row-1 || j==0 || j==column-1)
        {
            cout<<"* ";
        }
        else
        {
            cout<<"  ";
        }
    }
    cout<<endl;
}

return 0;

}