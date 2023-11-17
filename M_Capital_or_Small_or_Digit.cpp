#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    char input;
    cin >> input;
    if (input >= 'A' && input <= 'Z')
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (input >= 'a' && input <= 'z')
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    else
    {
        cout << "IS DIGIT" << endl;
    }
}