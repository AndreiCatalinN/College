/**
Program description:
Reads numbers from numere.in and
Transforms the read numbers into the closest numbers that are powers of 2
Ex: 14 becomes 16, 17 becomes 32, etc
And prints them to numere.out
Author: Andrei Negura
IDE: Code Blocks
*/
#include <fstream>
#include <iostream>
using namespace std;
ifstream f("numere.in");
ofstream g("numere.out");
// Checks if number x is a power of y
// Ex: x= 8 y=2 is 8 is 2 to the power 3
int putere(int x, int y) {
  while (x % y == 0)
    x = x / y;
  if (x == 1)
    return 1;
  else
    return 0;
}
int main() {
  int x;
  while (f >> x) {
    if (putere(x, 2) == 0) {
      while (putere(x, 2) != 1)
        x++;
      g << x << " ";
    } else
      g << x << " ";
  }

  f.close();
  g.close();
  return 0;
}
