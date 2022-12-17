#include <iostream>
using namespace std;
bool checkIligibiliti(int age)
{
    if (age >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;
    int iligibiliti = checkIligibiliti(age);
    if (iligibiliti)
    {
        cout << "Congratualtion You are eligible for vote !!wooho!";
    }
    else
    {
        cout << "Sorry Your are piddi !! you can't vote! ";
    }

    return 0;
}