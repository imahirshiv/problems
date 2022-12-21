#include<iostream>
using namespace std;
int value(int array[],int n)
{
    int missing = -1;
    int sum= 0;
    for (int i = 0; i < n; i++)
    {
        sum+= array[i];
    }
    int range_sum= (n)*(n+1)/2;
    missing = range_sum-sum;
    return missing;
    
}


int main(){
  // taking input size of array
    int n;
    cout << "Enter number of Element: ";
    cin >> n;
    int a[n];
    // taking input for array
    cout << "Enter array a[]'s element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // displaying the input of array 
    cout << "First array:  ";
    for (int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }
    cout << endl;
    cout<<value(a,n);
    cout<<endl;
    return 0;
}