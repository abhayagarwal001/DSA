#include<iostream>
using namespace std;

/*
Pattern-1

******
******
******

*/

int main()
{

int rows;
cout<<"Enter No. Of Rows:";
cin>>rows;

int column;
cout<<"Enter No. Of Column:";
cin>>column;

for(int i=0;i<rows;i++)
{
    for(int j=0;j<column;j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}

return 0;

}