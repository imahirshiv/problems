#include <iostream>
using namespace std;

int main()
{

    int array[] = {1, 2, 3, 4, 5, 6, 7, 12, 8, 15};
    int size = sizeof(array) / sizeof(array[0]);
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << max;

    return 0;
}