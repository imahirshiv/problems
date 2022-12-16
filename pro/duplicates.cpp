#include<iostream>
using namespace std;
int main(){

    int myarray[]={1,2,3,4,5,6,7,5};
    int size=sizeof(myarray)/sizeof(myarray[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(myarray[i]==myarray[j])
            {
                cout<<myarray[j];
            }
        }
        
    }
    cout<<endl;


    return 0;
}