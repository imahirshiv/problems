#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter n:- ";
    cin >> n;

    for (int line = 1; line <= n; line++)
    {

        int space = (n - line);
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }

        int no_of_char = 2 * line - 1;

        for (int i = 0; i < no_of_char; i++)
        {
            char x = (char)('A' + i);
            cout << x;
        }
        cout << endl;
    }

    return 0;
}