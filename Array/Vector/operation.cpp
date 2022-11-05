#include<iostream>
#include<vector>
using namespace std;

//create vector and take input from user and display the values as an output

  //function to display element
void display(vector<int>v){
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}

int main()
{

    //declare vector
    vector<int>v;
    
    cout<<"Enter Element: ";
    //input element
    for(int i=0;i<5;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    } 
    
    cout<<"Initial element in a vector ";
    display(v);
    cout<<endl;

    //calculate size of a vector
    int size=v.size();
    cout<<"Size: "<<size<<endl;
    cout<<endl;

        //calculate capacity of a vector
    int cap=v.capacity();
    cout<<"capacity: "<<cap<<endl;
    cout<<endl;


     //Resize  a vector
    v.resize(10);
    cout<<"New Size: "<<v.size()<<endl;
    cout<<endl;

     //calculate capacity of a vector
     cap=v.capacity();
    cout<<"capacity: "<<cap<<endl;
    cout<<endl;

     //Add element at end of a vector
    v.push_back(100);
    cout<<"New element inserted: ";
    display(v);
    cout<<endl;

     //Add element at any position in vector
    v.insert(v.begin()+2,500);
    cout<<"Inserted 500  at position 2: ";
    display(v);
    cout<<endl;

    //Delete element at end of a vector
    v.pop_back();
    cout<<"last  element Deleted: ";
    display(v);
    cout<<endl;

     //Delete element at any position in vector
    v.erase(v.begin()+2);
    cout<<" element deleted from  position 2: ";
    display(v);
    cout<<endl;

    //delete all element from a vector
    v.clear();
    cout<<"All element are deleted from vector ";
    display(v);
    cout<<endl;

 return 0;

}