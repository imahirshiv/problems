#include <iostream>
using namespace std;

int main()
{

    char vowels[5];
    // // take input using for loop
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> vowels[i];
    // }
    // cout << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << vowels[i] << endl;
    // }
    // for each loop taking input
    cout << endl;

    for (char &i : vowels)
    {
        cin>>i;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<vowels[i]<<endl;
    }

    return 0;
}