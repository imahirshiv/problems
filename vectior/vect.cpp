#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr1[] = {3, 5, 4};
    int arr2[] = {1, 2, 4, 6, 7, 8, 9, 10};

    int m = 3;
    int n = 8;

    int result[m + n];
    int i = 0; // itrate arr1
    int j = 0; // itrate arr2
    int k = 0; // itrate resultant arr

    while (i < m and j < n)
    {

        if (arr1[i] < arr2[j])
        {
            result[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            result[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < m)
    {
        result[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n)
    {
        result[k] = arr2[j];
        k++;
        j++;
    }
    // display result
    for (int i = 0; i < (m + n); i++)
        cout << result[i] << " ";

    return 0;
}