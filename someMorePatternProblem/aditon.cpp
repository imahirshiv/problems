#include <iostream>
#include<math.h>
using namespace std;
int addition(int,int);
void fun(string);
int main()
{

    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Entet b: ";
    cin >> b;
    cout << addition(a, b) << endl;
    fun("Ahir Shiv");
    return 0;
}
void fun(string name)
{
    cout << "Are You having fun?!!1" << name << "?!" << endl;
}
int addition(int a, int b)
{
    int sum = a + b;
    cout<<sqrt(sum)<<endl;
    cout<<pow(a,b)<<endl;
    return sum;
}