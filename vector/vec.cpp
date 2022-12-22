#include<iostream>
#include<vector>
using namespace std;


int main(){
   
    vector<int> vec(10);
    cout<<"The capacity is : "<<vec.capacity()<<endl;
    cout<<"The size of first:"<<vec.size();
    cout<<endl;
    vec.resize(3);
    cout<<"New capacity "<<vec.capacity()<<endl;
    cout<<vec.size();
    cout<<endl;
    vec.push_back(1);
        
    return 0;
}