/*
Program description: Checks if the pairs of numbers are identical
Author: Andrei Negura
IDE: Code Blocks
*/
#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int main() {
  int x, y, ok = 0;
  while (f >> x >> y) {
    if (x != y)
      ok = 1;
    x = y;
  }
  if (ok == 1)
    cout << "No";
  else
    cout << "Yes";
  return 0;
}
