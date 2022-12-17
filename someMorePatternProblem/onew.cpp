#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter N";
    cin >> n;
    for (int line = n; line >= 1; line--)
    {
        for (int i = n - line; i < 0; i--)

            cout << " ";

        for (int j = line; j > 0; j--)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}