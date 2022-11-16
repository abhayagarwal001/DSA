#include<iostream>
using namespace std;

/*
Pattern-13

     A
    ABC
   ABCDE
  ABCDEFG
 ABCDEFGHI
  ABCDEFG
   ABCDE
    ABC
     A

*/

int main()
{

int row;
cout<<"Enter No. Of Rows:";
cin>>row;

int col=row;

int sp=(row/2)+1;
int star=1;
char ch;

for(int i=0;i<row;i++)
{
    ch='A';
    for(int j=0;j<sp;j++)
    {
       cout<<"  ";
    }

    for(int k=0;k<star;k++)
    {
        cout<<ch<<" ";
        ch++;
    }

    if(i<row/2)
    {
        sp--;
        star+=2;
    }
    else{
        sp++;
        star-=2;
    }

    cout<<endl;

}

return 0;

}