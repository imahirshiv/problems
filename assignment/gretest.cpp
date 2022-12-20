#include<iostream>
using namespace std;


int main(){
    int array[5],n,small,largest,i;
    cout<<"Enter numbr of element : ";
    cin>>n;
    cout<<"The array element : ";
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    largest=small=array[0];
    for (int i = 1; i < n; ++i)
    {
        if (array[i]>largest)
        {
            largest=array[i];
        }
        if (array[i]<small)
        {
            small=array[i];
        }
        
        
    }
    cout<<"The smallest item in array is "<<small<<endl;
    cout<<"The largest element in array is "<<largest<<endl;
    cout<<"The sum of largest and smallest number is "<<small+largest<<endl;
    
   
    return 0;
}