#include <iostream>
using namespace std;
int missingnum(int arr[], int n)
{
    int N = n + 1;
    int total = (N) * (N + 1) / 2;
    for (int i = 0; i < n; i++)
        total -= arr[i];
    return total;
}

int main()
{

    int array[] = {1, 2, 3, 4, 6, 5, 7, 8, 9, 10, 11, 12, 14};
    int N = sizeof(array) / sizeof(array[0]);
    int miss = missingnum(array, N);
    cout << miss;
    cout << endl;
    return 0;
}