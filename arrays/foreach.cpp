#include<iostream>
using namespace std;
int main(){

    int myarray[]={1,2,3,4,5,6,6};
    int size=sizeof(myarray)/sizeof(myarray[0]);

    //For each loop!!

    for(int elment:myarray)
    {
        cout<<elment<<endl;
    }
    cout<<endl;
    //while loops
    int idx=0;
    while (idx<size)
    {
        cout<<myarray[idx]<<endl;
        idx++;
    }
    return 0;
}