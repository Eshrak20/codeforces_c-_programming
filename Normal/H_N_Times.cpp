#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    for (int k = 0; k < x; k++)
    {
        int n;
        char element;

        cin >> n;
        cin >> element;
        for (int i = 0; i < n; i++)
        {
            cout << element<< " ";
        }
        cout << endl;
    }

    return 0;
}