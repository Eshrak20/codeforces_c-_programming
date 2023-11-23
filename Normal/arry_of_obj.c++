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
        cin >> a[i].name >> a[i].id >> a[i].marks;
    }
    Programmer min;
    min.marks = INT_MAX;
    for (int i = 0; i < x; i++)
    {
        // cout << a[i].name << " " << a[i].id << " " << a[i].marks << " " << endl;
        if (a[i].marks < min.marks)
        {
            min = a[i];
        }
    }
    cout << min.name << " " << min.id << " " << min.marks << " " << endl;

    return 0;
}