#include<iostream>
using namespace std;
int oddeven(int array[], int n)
{
    int odd_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] %2!=0)
        {
            odd_count++;
        }
    }
    return odd_count;
}


int main(){
    int n;
    cout<<"Enter the number of n: ";
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int odd = oddeven(array,n);
    int even  = n-odd;
    cout<<"The even is :"<<even<<endl;
    cout<<"The odd is :"<<odd<<endl;
    
   
    return 0;
}