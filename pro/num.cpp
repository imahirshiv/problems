#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter n:- ";
    cin >> n;

    for (int line = 1; line <= n; line++)
    {
        int space = n - line;
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }

        int numberOfCharacter = 2 * line - 1;
        for (int i = 0; i < numberOfCharacter; i++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}