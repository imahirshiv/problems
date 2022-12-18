#include <iostream>
using namespace std;

int main()
{

    int myarray[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> myarray[i];
    }
    int max = 0;
    for (int j = 0; j < 10; j++)
    {
        if (myarray[j] > max)
        {
            max= myarray[j];
        }
    }
    cout << max << endl;

    return 0;
}