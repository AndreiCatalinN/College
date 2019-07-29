/**
Program description: Finds the smallest
 number with the biggest digit

Author: Andrei Negura
IDE: Code Blocks
*/
#include <fstream>
#include <iostream>
using namespace std;
ifstream f("numere.in");
int fr[20];
// Finds the biggest digit in a number
int cmax(int x) {
  int max = -1;
  while (x != 0) {
    if (max < x % 10)
      max = x % 10;
    x = x / 10;
  }
  return max;
}

int main() {
  int x, y, a;
  f >> x;
  a = cmax(x);
  while (f >> x) {

    if (a < cmax(x)) {
      a = cmax(x);
      y = x;
    } else if (a == cmax(x) && x < y)
      y = x;
  }
  cout << y;
  return 0;
}
