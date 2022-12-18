#include<iostream>
using namespace std;
int main(){

    int arr[]={1,2,3,4,5};
    cout<<sizeof(arr)<<endl;
    int length=sizeof(arr)/sizeof(arr[0]);
    cout<<length<<endl;
    return 0;
}