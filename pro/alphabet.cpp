#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter n:- ";
    cin >> n;

    // For Upper traiangle

    for (int line = 1; line <= n; line++)
    {
        // For Spaces

        int space = (n - line);
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }

        // For character

        int no_of_char = 2 * line - 1;

        for (int i = 0; i < no_of_char; i++)
        {
            char x = (char)('A' + i);
            cout << x;
        }
        cout << endl;
    }

    // For Lower triangle

    for (int line = n + 1; line <= 2 * n - 1; line++)
    {

        // For Spaces

        int numberOfSpace = (line - n);
        for (int k = 0; k < numberOfSpace; k++)
        {
            cout << " ";
        }

        // For Characters

        int numberOfChar = 2 * (2 * n - line) - 1;
        for (int j = 0; j < numberOfChar; j++)
        {
            char ch = (char)('A' + j);
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}