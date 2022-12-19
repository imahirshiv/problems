#include<iostream>
using namespace std;
int missingnum(int arr[],int n){
    int N=n+1;
    int total=(N)*(N+1)/2;
    for (int i = 0; i < n; i++)
    
        total-=arr[i];
        return total;  
}
int main(){
    int arrray[]={1,2,3,5,6,7,8};
    int N=sizeof(arrray)/sizeof(arrray[0]);
    int missing= missingnum(arrray,N);
    cout<<missing;
    cout<<endl;
   
    return 0;
}