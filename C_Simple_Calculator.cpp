#include <stdio.h>
#include <iostream>
using namespace std;
int main (){
    long long int x, y;
    cin >> x;
    cin >> y;
    long long int add = x + y;
    long long int multiply = x * y;
    long long int sub = x - y;

    cout << x << " " << "+" <<" " << y << " " << "=" << " " << add<<endl;
    cout << x << " "
         << "*"
         << " " << y << " "
         << "="
         << " " << multiply<<endl;
    cout << x << " "
         << "-"
         << " " << y << " "
         << "="
         << " " << sub;
}