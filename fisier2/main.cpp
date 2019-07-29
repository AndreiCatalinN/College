/*
Program description: Calculates and prints the sum of a file
Author:Andrei Negura
Date: 15/09/2014
IDE:  Code Blocks
*/
#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int main() {
  int n, i, x, s = 0;
  f >> n;
  for (i = 0; i < n; i++) {
    f >> x;
    s = s + x;
    if (i == n - 1)
      cout << x << " = " << s;
    else
      cout << x << " + ";
  }

  f.close();
  return 0;
}
