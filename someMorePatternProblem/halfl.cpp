#include <iostream>
using namespace std;
void halfpyramid(int n)
{

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;
    halfpyramid(n);
    halfpyramid(n);
    halfpyramid(n);
    halfpyramid(n);
    halfpyramid(n);
    halfpyramid(n);
    return 0;
}