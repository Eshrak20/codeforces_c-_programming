// #include <iostream>
// #include <sstream>

// using namespace std;

// int main()
// {
//   int sum = 0;
//   string s;
//   getline(cin, s);
//   stringstream ss(s);
//   string eshrak;

//   while (ss >> eshrak)
//   {
//     if (eshrak >= "A" && eshrak <= "Z" || eshrak >= "a" && eshrak <= "z")
//     {
//       sum = sum + 1;
//     }
//   }
//   cout << sum;

//   return 0;
// }

#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin, s);
  int found = false;
  int cnt = 0;
  for (char c : s)
  {
    if (isalpha(c))
    {
      if (found == false)
      {
        cnt++;
        found = true;
      }
    }
    else
    {
      found = false;
    }
  }

  cout << cnt;

  return 0;
}