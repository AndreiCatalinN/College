/**
Program description:
Reads numbers from numere.in and
Transforms the read numbers by keeping only the odd digits of those numbers
and prints them to numere.out
Author: Andrei Negura
IDE: Code Blocks
*/
#include <fstream>
#include <iostream>
using namespace std;
ifstream f("numere.in");
ofstream g("numere.out");

// rebuilds a number using only its odd digits
int par(int x) {
  int m = 0, p = 1;
  while (x != 0) {
    // builds it in the same order as it was
    // ex: 2345 becomes 35 and not 53
    if (x % 2 == 1) {
      m = m + x % 10 * p;
      p = p * 10;
    }
    x = x / 10;
  }
  return m;
}

int main() {
  int x;

  while (f >> x) {
    if (par(x) != 0)
      g << par(x) << " ";
  }
  f.close();
  g.close();
  return 0;
}
