#include <iostream>
using namespace std;
int count(int arr[], int n)
{
    int count_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count_odd++;
        }
    }
    return count_odd;
}
int main()
{
    int n;
    cout << "Enter Size of array: ";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int odd = count(array, n);
    cout << "The odd count is : " << odd << endl;
    cout << "The even coutn is : " << n - odd << endl;

    return 0;
}