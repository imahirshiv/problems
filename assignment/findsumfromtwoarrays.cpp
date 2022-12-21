#include <iostream>
using namespace std;
int sumOfGreatestSmallest(int a[], int b[], int n)
{

    // finding minumum element in aray a and also storing it's index
    int minA = a[0], indexA;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < minA)
        {
            minA = a[i];
            indexA = i;
        }
    }
    // finding minumum element in array b and also storing it's index
    int minB = b[0], indexB;
    for (int i = 1; i < n; i++)
    {
        if (b[i] < minB)
        {
            minB = b[i];
            indexB = i;
        }
    }
    // if index of minimum element is not same return their sum
    if (indexA != indexB)
    {
        return (minA + minB);
    }
    // when index of a is not same as previous
    // and the value is also less then other minimum
    // stor new minimum and also it's index
    int minA2 = INT16_MAX, indexA2;
    for (int i = 0; i < n; i++)
    {
        if (i != indexA && a[i] < minA2)
        {
            minA2 = a[i];
            indexA2 = i;
        }
    }
    // when index of b is not same as previous
    // and the value is also less then other minimum
    // stor new minimum and also it's index
    int minB2 = INT16_MAX, indexB2;
    for (int i = 0; i < n; i++)
    {
        if (i != indexB && a[i] < minB2)
        {
            minB2 = b[i];
            indexB2 = i;
        }
    }
    // Taking sum of previous minimum of a[]
    // with new minimum of b[]
    // and also sum of previous minimum of b[]
    //  with new minimum of a[]
    // and return whichever is minimum.
    return min(minB + minA2, minA + minB2);
}

int main()
{
    // taking input size of array
    int n;
    cout << "Enter number of Element: ";
    cin >> n;
    int a[n];
    int b[n];
    // taking input for array 1
    cout << "Enter array a[]'s element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // taking input for array 2
    cout << "Enter array b[]'s element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    // displaying the input of array 1
    cout << "First array:  ";
    for (int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }
    // dispalying the input of array 2
    cout << endl;
    cout << "Second array: ";
    for (int k = 0; k < n; k++)
    {
        cout << b[k] << " ";
    }
    cout<<endl;
    // calling function and giving value of array1 , array 2 and size of array
    cout<<"Sum of minimum from both array is : "<< sumOfGreatestSmallest(a, b, n);
    cout<<endl;
    return 0;
}