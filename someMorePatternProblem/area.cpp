#include <iostream>
using namespace std;
float area(float);
float circumfrence(float);
int main()
{
    int n;
    cout << "Enter radius: ";
    cin >> n;
    cout << area(n)<<endl;
    cout << circumfrence(n)<<endl;
    return 0;
}
float area(float n)
{
    float area_of_circle = 3.14 * n * n;
    return area_of_circle;
}
float circumfrence(float n)
{
    float circum= 2*3.14*n;
    return circum;
}