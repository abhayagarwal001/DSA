#include<iostream>
using namespace std;

/*
Pattern-5

    *
   ***
  *****
 *******   

*/

int main()
{

int row;
cout<<"Enter No. Of Rows:";
cin>>row;

int space=row-1;
int star=1;

for(int i=0;i<row;i++)
{
    for(int j=0;j<space;j++)
    {
     cout<<"  ";    
    
    }

    for(int k=0;k<star;k++)
    {
        cout<<"* ";
    }

    cout<<endl;

    space--;
    star+=2;
}

return 0;

}