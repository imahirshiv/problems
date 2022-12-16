#include<iostream>
using namespace std;
int main(){

    int num1,num2;
    cin>>num1>>num2;
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;

    cout<<"After Swaping Num1 : "<<num1<<endl;
    cout<<"After Swaping Num2 : "<<num2<<endl;

    return 0;
    cout<<endl;
}