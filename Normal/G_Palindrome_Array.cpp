#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    long long int flag = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int i = 0;
    long long int j = n - 1;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}