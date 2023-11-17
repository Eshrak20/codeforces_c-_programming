#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << arr[2] << " " << arr[0];
    return 0;
}

