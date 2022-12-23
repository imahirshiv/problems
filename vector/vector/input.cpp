#include<iostream>
#include<vector>
using namespace std;
 //input taking in vector 

int main(){
    cout<<"Input taking in vector: ";
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int elm;
        cin>>elm;
        v.push_back(elm);
    }
    //for loop
    cout<<endl;
    cout<<"For looop: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
   
    cout<<endl;
    //input taking in array
    cout<<"Input taking in array"<<endl;

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    //for each loop for showing the given input
    cout<<endl;
    cout<<"For each loop: ";

    for(int elmn:v)
    {
        cout<<elmn<<" ";
    }
    cout<<endl;
    
    //while loop
    cout<<endl;
    cout<<"while loop : ";

    int idx=0;
    while (idx<v.size())
    {
        cout<<v[idx++]<<" ";
    }
    
   
    return 0;
}