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

    if (num1 > num2 && num1 > num3)
    {
        cout << "Num1 :";
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "Num2 : ";
    }
    else if (num3 > num1 && num3 > num2)
    {
        cout << "Num3 :";
    }
    else
    {
        cout << "All Number Are same !!! Lol!";
    }
    return 0;
}