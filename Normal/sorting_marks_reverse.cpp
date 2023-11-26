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

int main()
{
    int x;
    cin >> x;
    Student *n = new Student[x];
    for (int i = 0; i < x; i++)
    {
        cin >> n[i].name >> n[i].roll >> n[i].marks;
    }
    for (int i = x-1; i >=0; i--)
    {
        cout << n[i].name << " " << n[i].roll << " " << n[i].marks << " " << endl;
    }
    delete[] n;
    return 0;
}