#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string sss;
    while (ss >> sss)
    {

        for (int i = sss.length() - 1; i >= 0; i--)
        {
            cout << sss[i];
        }
        cout << " ";
    }

    return 0;
}
