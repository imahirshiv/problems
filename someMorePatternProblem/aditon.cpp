#include <iostream>
using namespace std;
int additon(int a, int b)
{
    int sum = a + b;
    return sum;
}
void fun(string x);
int main()
{

    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Entet b: ";
    cin >> b;
    cout << additon(a, b) << endl;
    fun("Ahir Shiv");
    return 0;
}
void fun(string name)
{
    cout << "Are You having fun?!!1" << name << "?!" << endl;
}