#include <iostream>
using namespace std;
int main()
{

    int num1, num2, num3;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    cout << "Enter num3: ";
    cin >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << "num1 is maximum in above numbers!";
        }
        else
        {
            cout << "num3 is maximux in above numbers!";
        }
    }
    else
    {
        if (num2 > num3)
        {
            cout << "num2 is maximum in the above numbers!";
        }
        else
        {
            cout << "num3 is maxumum in the above numbers!";
        }
    }
    // else if (num2>num3)
    // {
    //     cout<<"num2 is maximum in above numbers! ";
    // }
    // else if(num3>num1)
    // {
    //     cout<<"num3 is maximum in above numbers! ";
    // }
    // else
    // {
    //     cout<<"All numbers are same!!";
    // }

    return 0;
}