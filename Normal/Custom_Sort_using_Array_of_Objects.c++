#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Custom
{
public:
    char value;
    int count;
};
bool compare(Custom x, Custom y)
{
    if (x.count == y.count)
    {
        return x.value < y.value;
    }
    else
    {
        return x.count > y.count;
    }
}

int main()
{
    string s;
    cin >> s;
    Custom a[26];
    for (int i = 0; i < 26; i++)
    {
        a[i].value = char(i + 'a');
        a[i].count = 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        int ascii = s[i] - 'a';
        a[ascii].count++;
    }
    sort(a, a + 26, compare);

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < a[i].count; j++)
        {

            cout << a[i].value << endl;
        }
    }

    return 0;
}