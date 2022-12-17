#include<iostream>
using namespace std;
int additon(int a, int b){
    int sum=a+b;
    return sum;
}
int main(){

    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Entet b: ";
    cin>>b;
    cout<<additon(a,b)<<endl;

    return 0;
}