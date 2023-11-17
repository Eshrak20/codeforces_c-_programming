#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int i1, i2, i3;
    char c1, c2;
    cin >> i1;
    cin >> c1;
    cin >> i2;
    cin >> c2;
    cin >> i3;

    if (i1 + i2 == i3 && c1 == '+')
    {
        cout << "Yes";
    }
    else if (i1 + i2 != i3 && c1 == '+')
    {
        cout << i1 + i2;
    }
    else if (i1 - i2 == i3 && c1 == '-')
    {
        cout << "Yes";
    }
    else if (i1 - i2 != i3 && c1 == '-')
    {
        cout << i1 - i2;
    }
    else if (i1 * i2 == i3 && c1 == '*')
    {
        cout << "Yes";
    }

    else if (i1 * i2 != i3 && c1 == '*')
    {
        cout << i1 * i2;
    }

    return 0;
}