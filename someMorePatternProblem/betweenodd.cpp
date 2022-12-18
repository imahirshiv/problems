#include <iostream>
using namespace std;
bool isodd(int num)
{
    if (num % 2 == 0)
    {
        // number even
        return false;
    }
    else
    {
        // number odd
        return true;
    }
}
int main()
{
    int a, b;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    for (int num = a; num <= b; num++)
    {
        if (isodd(num))
        {
            cout << num << endl;
        }
    }

    return 0;
}