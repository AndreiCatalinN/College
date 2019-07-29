/**
Program description:
Print the smallest number x, bigger or
equal to n read from the keyboard which
has all digits equal.
Eg: for n=347 x=444, for n=312 x=333
Author: Andrei Negura
Date: 20/03/2016
IDE: Code Blocks
*/

#include <iostream>

using namespace std;

int check(int x) {
  int c, k = 0;
  c = x % 10;

  while (x > 0) {
    if (x % 10 == c)
      k++;
    else
      return 0;
    x = x / 10;
  }
  return k;
}

int main() {
  int n, x;
  cout << "Initial number: ";
  cin >> n;

  x = n;

  while (check(x) == 0)
    x++;

  cout << n << " -> " << x << endl;
  return 0;
}
