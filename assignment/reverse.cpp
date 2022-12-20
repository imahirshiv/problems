#include <iostream>
using namespace std;
int rev(int array[], int n)
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
    return false;
}

int main()
{
    int n;
    cout << "Enter element number: ";
    cin >> n;
    int array[n];
    cout << "Enter the element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << endl;
    cout << "Your array is :";
    for (int j = 0; j < n; j++)
    {
        cout << array[j];
    }
    cout << endl;
    cout << "The reverse array is :" << rev(array, n) << endl;
    return 0;
}