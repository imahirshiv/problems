#include <iostream>
using namespace std;
int main()
{
    int i = 0, j = 0, sp = 0;
    int rows;
    cout<<"Enter rows: ";
    cin>>rows;

    while (i < rows)
    {
        sp = 0;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }

    return 0;
}
