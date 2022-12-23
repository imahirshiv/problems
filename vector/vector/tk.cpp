#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        int elm;
        cin>>elm;
        v.push_back(elm);

    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
        cout<<endl;
   
    return 0;
}