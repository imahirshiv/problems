#include <iostream>
using namespace std;
int voter(int age);
int age;
int main()
{

    int age;
    cout << "Enter age of the persion: ";
    cin >> age;
    cout << voter(age);

    return 0;
}
int voter(int age)
{
    if (age >= 18)
    {
        cout << "Congratulation You can vote"<<endl;
    }
    else if (age < 18)
    {
        cout << "Sorry You are Child! you can't vote!! LoL!"<<endl;
    }
    else
    {
        cout << "Please Enter valid number"<<endl;
    }
    return 0;
}