#include<iostream>
using namespace std;

/*
Pattern-4

* * * *
* * *
* *
* 

*/

int main()
{

int row;
cout<<"Enter No. Of Rows:";
cin>>row;


for(int i=0;i<row;i++)
{
    for(int j=0;j<row-i;j++)
    {
         cout<<"* ";
       
    }
    cout<<endl;
}

return 0;

}