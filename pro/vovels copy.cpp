#include <iostream>
using namespace std;
int main()
{

    char abc;
    cout << "Enter Character from a to z:- ";
    cin >> abc;

    switch (abc)
    {
    case 'a':
        cout << abc << " is an vowel"<<endl;
        break;
    case 'e':
        cout << abc << " is an vowel"<<endl;
        break;
    case 'i':
        cout << abc << " is an vowel"<<endl;
        break;
    case 'o':
        cout << abc << " is an vowel"<<endl;
        break;
    case 'u':
        cout << abc << " is an vowel"<<endl;
        break;

    default:
        cout << abc << " is an consonent!";
        break;
    }

    return 0;
}