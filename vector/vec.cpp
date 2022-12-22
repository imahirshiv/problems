#include<iostream>
#include<vector>
using namespace std;


int main(){
   
    vector<int> vec(10);
    cout<<vec.size();
    cout<<endl;
    vec.resize(3);
    cout<<vec.size();
    cout<<endl;
    return 0;
}