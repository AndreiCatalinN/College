/*
Program description: Finds the biggest
sequence of perfect numbers in file date.in and
prints it's size
Author: Andrei Negura
IDE: Code Blocks
*/
#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");

int main() {
  int x, k = 0, kmax = 0, a;

  while (f >> x) {
    if (sqrt(x) == (int)sqrt(x)) {
      k++;
      if (k > kmax)
        kmax = k;
    } else
      k = 0;
  }
  cout << kmax;
  f.close();
  return 0;
}
