#include <iostream>
using namespace std;
void rev(int array[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "";
    
    }
    }
int main()
{
    int n=5;
    int array[]={5,6,7,8,9};

    cout<<"The reverse array is :";
    rev(array,n);
}