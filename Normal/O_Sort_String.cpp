
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }






    // trying frequence 
    // for (int i = 'a'; i < 'z'; i++)
    // {
    //     if (i >= 'a' && i <= 'z')
    //     {
    //         cout << arr[i];
    //     }
    // }

    return 0;
}

