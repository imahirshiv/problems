#include<iostream>
using namespace std;
int missing(int myarr[], int n)
{
    int N= n+1;
    int total=(N) (N+1)/2;
    for (int i = 0; i < n; i++)
    
        total-=myarr[i];
    return total;   
}

int main(){

    int array[]={1,2,3,4,5,7,8,9};
    int N=sizeof(array)/sizeof(array[0]);

    int miss = missing(array,N);
    cout<<miss;
    cout<<endl;

    return 0;
}