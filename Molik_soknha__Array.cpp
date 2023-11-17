#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < arr[i]; j++)
        {

            if (i != j && arr[i] % j == 0)
            {
                flag = 0;
                // cout << j;
                break;
            }
        }
    }
    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

