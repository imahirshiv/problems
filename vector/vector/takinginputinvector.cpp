#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> myvec;

    for (int i = 0; i < 5; i++)
    {
        int element;
        cin>>element;
        myvec.push_back(element);
    }
    for (int i = 0; i < myvec.size(); i++)
    {
        cout<<myvec[i];
    }
    cout<<endl;
    
    
   
    return 0;
}