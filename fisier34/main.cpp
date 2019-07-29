/**
Program description:
Reads numbers from numere.in and
Calculates the sum of the numbers digits
Finds the number with the biggest sum of
digits and out of those numbers, finds the smallest number
Ex: out of 9029 and 929, 929 is the answer because the sum is
equal and the number is smaller
Author: Andrei Negura
IDE: Code Blocks
*/
#include <fstream>
#include <iostream>
using namespace std;
ifstream f("numere.in");
// Calculates the sum of the digits of a number
int suma(int x) {
  int s = 0;
  while (x != 0) {
    s = s + x % 10;
    x = x / 10;
  }
  return s;
}
int main() {
  int x, a, s;
  f >> x;
  a = x;
  s = suma(x);

  while (f >> x) {
    if (s < suma(x)) {
      s = suma(x);
      a = x;
    } else if (suma(x) == s && x < a)
      a = x;
  }
  cout << a;
  f.close();

  return 0;
}
