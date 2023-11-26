#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int marks;
};
bool compare(Student a, Student b)
{
    if (a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    else
    {
        return a.marks > b.marks;
    }
};
int main()
{
    int x;
    cin >> x;
    Student *n = new Student[x];
    for (int i = 0; i < x; i++)
    {
        cin >> n[i].name >> n[i].roll >> n[i].marks;
    }
    sort(n, n + x, compare);
    for (int i = 0; i < x; i++)
    {
        cout << n[i].name << " " << n[i].roll << " " << n[i].marks << " " << endl;
    }
    delete[] n;
    return 0;
}