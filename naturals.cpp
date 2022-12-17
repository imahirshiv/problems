#include <iostream>
using namespace std;
int sqr(int x)
{
    int sq = x * x;
    return sq;
}
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        cout << sqr(i) <<" ";
    }

    return 0;
}