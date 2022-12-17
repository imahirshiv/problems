#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int l = 1; l <= n; l++)
    {
        int sp = n - l;
        for (int i = sp; i > 0; i--)
        {
            cout << " ";
        }

        for (int j = 1; j <= l; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}