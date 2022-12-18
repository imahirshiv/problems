#include<iostream>
using namespace std;
int main(){

    int array[]={1,2,3,4,56,6,7,9};
    int size=sizeof(array)/sizeof(array[0]);
    cout<<"I am size of array: "<<size<<endl;

    //for loop in array
    for (int i = 0; i < size; i++)
    {
        cout<<"I am from For: "<<array[i]<<endl;
    }
    cout<<endl;
    //for each loop
    for(int element:array)
    {
        cout<<"I am from For Each: "<<element<<endl;
    }
    cout<<endl;
    //while loop
    int idx=0;
    while (idx<size)
    {
        cout<<"I am from while: "<<array[idx]<<endl;
        idx++;
    }
    cout<<endl;
    

    return 0;
}