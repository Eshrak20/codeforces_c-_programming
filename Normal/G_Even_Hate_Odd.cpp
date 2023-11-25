#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    for (int xxx = 0; xxx < x; xxx++)
    {
        long long int input;
        cin >> input;
        if (input % 2 == 0)
        {
            int arr[input];
            for (int i = 0; i < input; i++)
            {
                cin >> arr[i];
            }
            int even = 0;
            int odd = 0;
            int sub = 0;
            int need = input / 2;
            int count = 0;
            for (int k = 0; k < input; k++)
            {
                if (arr[k] % 2 == 0)
                {
                    even++;
                }
                if (arr[k] % 2 != 0)
                {
                    odd++;
                }
            }
            if (even > odd)
            {
                sub = even - odd;
                count = sub - need;
            }
            else
            {
                sub = odd - even;
                count = sub - need;
            }

            if (odd == even)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << count << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}