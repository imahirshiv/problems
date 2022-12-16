#include <iostream>
using namespace std;
int main()
{

    int num1, num2;
    char operand;
    cout << "Enter num1 :";
    cin >> num1;
    cout << "Enter num2 :";
    cin >> num2;
    cout << "Enter operand from (+,-,/,%,*) " << endl;
    cin >> operand;
    switch (operand)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '%':
        cout << num1 % num2;
        break;

    default:
        cout << "Please enter valid operator!";
        break;
    }

    cout<<endl;
    return 0;
}