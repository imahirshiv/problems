#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << "Enter x :";
    int x;
    cin >> x;

    int occurence = -1;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            occurence = i;
        }
    }
    cout<<x<<" is avalible at index : ";
    cout << occurence;
    cout<<endl;
    return 0;
}