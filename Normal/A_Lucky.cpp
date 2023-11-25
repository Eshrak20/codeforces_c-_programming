#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int flag = 0;
    cin >> x;

    for (int k = 0; k < x; k++)
    {
        string s;
        for (int i = 0; i < 6; i++)
        {
            cin >> s[i];
        };

        for (int i = 0; i < 6; i++)
        {
            // cout << s[i];
            if (s[i] + s[i + 1] + s[i + 2] == s[i + 3] + s[i + 4] + s[i + 5])
            {
                flag = 1;
            }
        }

        if (flag == 1)
        {
            cout << "YES";
            flag = 0;
            cout << endl;
        }
        else
        {
            cout << "NO";
            cout << endl;
        }
    }

    return 0;
}