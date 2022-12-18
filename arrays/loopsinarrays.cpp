#include <iostream>
using namespace std;

int main()
{

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(array) / sizeof(array[2]);
    // for loop

    for (int i = 0; i < size; i++)
    {
        cout << "i am from for Loop: " << array[i] << endl;
    }
    cout << endl;
    // for each loop
    for (int elm : array)
    {
        cout << "i am from for each: " << elm << endl;
    }
    cout << endl;
    // while loop

    int idx = 0;
    while (idx < size)
    {
        cout << "I am from while loop: " << array[idx] << endl;
        idx++;
    }

    return 0;
}