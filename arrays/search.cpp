#include <iostream>
using namespace std;

int main()
{
    int array[] = {2, 3, 4, 5, 6, 9, 7, 10, 11, 15, 13};
    int size = sizeof(array) / sizeof(array[0]);
    int key = 7                                                                                                                                                                                                             ;

    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            ans = array[i];
            break;
        }
    }
    cout << ans << endl;

    return 0;
}