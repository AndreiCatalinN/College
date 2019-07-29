/*
Program description: Counts the numbers that are smaller than
or equal to the first read number
Author: Andrei Negura
IDE: Code Blocks
*/
#include <fstream>
#include <iostream>

using namespace std;
ifstream f("numere.in");

int main() {
  int x, ap, y;
  f >> x;
  ap = 1;
  y = x;
  while (f >> x) {
    if (x < y)
      ap++;
  }
  cout << ap;
  return 0;
}
