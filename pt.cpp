#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int line = 1; line < n; line++)
    {
        int space = n - line;
        for (int i = 0; i < space; i++)
        {
            cout << " ";
        }
        int ch1 = 2 * (line - 1);
        for (int j = 0; j <= ch1; j++)
        {
            char x = (char)('A' + j);
            cout << x;
        }
        cout << endl;
    }
    for (int line = n + 1; line <= 2 * n - 1; line++)
    {
        int space = line - n;
        for (int i = 0; i < space; i++)
        {
            cout << " ";
        }

        int ch2 = 2 * (2 * n - line) - 1;
        for (int j = 0; j < ch2; j++)
        {
            char x = (char)('A' + j);
            cout << x;
        }
        cout << endl;
    }

    return 0;
}