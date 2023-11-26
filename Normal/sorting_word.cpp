#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string s2;

    getline(cin, s);
    cin >> s2;
    stringstream ss;
    ss << s;
    string checker;
    int match = 0;
    for (; ss >> checker;)
    {
        if (checker == s2)
        {
            match++;
        }
    }
    cout << match << endl;

    return 0;
}