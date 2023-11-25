#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Programmer
{
public:
    string name;
    int id;
    int marks;
};
int main()
{
    int x;
    cin >> x;
    Programmer *a = new Programmer[x];
    for (int i = 0; i < x; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].id >> a[i].marks;
    }
    Programmer max;
    max.marks = INT_MIN;
    for (int i = 0; i < x; i++)
    {
        if (a[i].marks > max.marks)
        {
            max = a[i];
        }
        else if (a[i].marks == max.marks)
        {
            if (a[i].id < max.id)
            {
                max = a[i];
            }
        }
    }
    cout << max.name << " " << max.id << " " << max.marks << " " << endl;

    return 0;
}