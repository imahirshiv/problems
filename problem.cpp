#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;

    // For upper traingle

    for (int line = 1; line < n; line++)
    {
        // for spaces;
        int forSpaces = (n - line);
        for (int i = 0; i < forSpaces; i++)
        {
            cout << ".";
        }

        // for character
        int numofchar = 2 * (line)-1;
        for (int k = 0; k < numofchar; k++)
        {
            char x = (char)('A' + k);
            cout << x;
        }
        cout << endl;
    }
    // for lowertraingle
    for (int line = n + 1; line <= 2 * n - 1; line++)
    {
        // for spaces
        int spaces = line - n;
        for (int i = 0; i < spaces; i++)
        {
            cout << ".";
        }
        // for character
        int forchar = 2 * (2 * n - line) - 1;
        for (int j = 0; j < forchar; j++)
        {
            char y = (char)('A' + j);
            cout << y;
        }

        cout << endl;
    }

    return 0;
}