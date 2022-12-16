#include<iostream>
using namespace std;
int main(){

    int starRow,starColumn;
    cout<<"Enter star Row :";
    cin>>starRow;
    cout<<"Enter star Column :";
    cin>>starColumn;

    for (int line = 1; line <= starRow; line++)
    {
        for (int i = 1; i <= starColumn; i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

    return 0;
}