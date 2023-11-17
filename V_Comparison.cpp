#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int i1, i2;
    char c;
    cin >> i1;
    cin >> c;
    cin >> i2;
    if (i1 > i2 && c == '>')
    {
        cout << "Right";
    }
    else if (i1 == i2 && c == '=')
    {
        cout << "Right";
    }
    else if (i1 < i2 && c == '<')
    {
        cout << "Right";
    }
    else if (i1 != i2 && c == '=')
    {
        cout << "Wrong";
    }
    else if (i1 > i2 && c == '<')
    {
        cout << "Wrong";
    }
    else if (i1 < i2 && c == '>')
    {
        cout << "Wrong";
    }else{
        cout << "Wrong";
    }

    return 0;
}