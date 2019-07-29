/**
Program description:
Reads numbers from numere.in and
finds the pair which has the biggest number of divisors
Author: Andrei Negura
IDE: Code Blocks
*/
#include <fstream>
#include <iostream>
using namespace std;
ifstream f("numere.in");
// Returns the number of elements that divide x
// Ex: for x equals 4, 1 is returned
int div(int x) {
  int i, k = 1;
  for (i = 2; i <= x / 2; i++)
    if (x % i == 0)
      k++;
  return k;
}

int main() {
  int x, y, a, n, m;
  f >> x >> y;
  a = div(x) + div(y);
  while (f >> x >> y) {
    if (a <= div(x) + div(y)) {

      a = div(x) + div(y);
      n = x;
      m = y;
    }
  }
  cout << n << " " << m;
  return 0;
}
