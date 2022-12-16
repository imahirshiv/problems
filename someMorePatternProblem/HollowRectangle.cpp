#include <iostream>
using namespace std;
int main()
{

    int i, j, stRow, stCl;
    cout << "Enter Row: ";
    cin >> stRow;
    cout << "Enter Col: ";
    cin >> stCl;

    for (int i = 0; i < stRow; i++)
    {
        for (int j = 0; j < stCl; j++)
        {
            if (i == 0 || i == stRow - 1 || j == 0 || j == stCl - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}