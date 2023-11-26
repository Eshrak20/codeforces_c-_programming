#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, power;
    cin >> x;
    cin >> power;
    long long int sum = 0;
    for (long long int i = 2; i <= power; i +=2)
    {
        long long int store = pow(x * 1.0, i * 1.0);
        sum = sum + store;
    }
    cout << sum;

    return 0;
}