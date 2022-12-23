#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> vect;
    for (int i = 0; i < n; i++)
    {
        int elm;
        cin >> elm;
        vect.push_back(elm);
    }
    // for loop in vec
    cout << endl;
    cout<<"For Loop: ";
    for (int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }
    cout << endl;
    // for each loop in vec
    cout<<"Foreach loop: ";
    for (int el : vect)
    {
        cout << el << " ";
    }
    cout << endl;
    // while loop in vec
    cout<<"While loop: ";
    int idx = 0;
    while (idx < vect.size())
    {
        cout << vect[idx] << " ";
        idx++;
    }
    cout << endl;

    return 0;
}