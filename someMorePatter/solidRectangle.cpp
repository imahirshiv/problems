#include <iostream>
using namespace std;
int main()
{

    int stRow, stCol;
    cout << "Enter Row: ";
    cin >> stRow;
    cout << "Enter Col :";
    cin >> stCol;

    for (int line = 1; line <= stRow; line++)
    {
        for (int i = 1; i <= stCol; i++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}