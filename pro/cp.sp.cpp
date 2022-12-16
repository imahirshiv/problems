#include <iostream>
using namespace std;
int main()
{

    int cp, sp;
    cout << "Enter cost price: ";
    cin >> cp;
    cout << "Enter selling price: ";
    cin >> sp;
    if (cp > sp)
    {
        cout << "you got loss! of " << cp - sp << " Rupees" << endl;
    }
    else if (sp > cp)
    {               
        cout << "You got profit of : " << sp - cp << " Rupees" << endl;
    }
    else
    {
        cout << "You don't get any loss or profit! " << endl;
    }

    return 0;
}