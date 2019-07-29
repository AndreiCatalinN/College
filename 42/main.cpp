/**
Program description:
Print the closest number to n read from the
keyboard which has the number of even digits
equal with the number of odd digits
IDE: Code Blocks
Author: Andrei Negura
Date: 20/01/2016
*/

#include <iostream>

using namespace std;
// Could've made a a check
// parity function instead of even and odd
int even(int x) {
  int c = 0;
  while (x != 0) {
    if (x % 2 == 0)
      c++;
    x = x / 10;
  }
  return c;
}

int odd(int x) {
  int c = 0;
  while (x != 0) {
    if (x % 2 == 1)
      c++;
    x = x / 10;
  }
  return c;
}

int main() {
  int xs, n, xd;
  cout << "Enter the number: ";
  cin >> n;
  // xs is  for the left hand side
  // xd is for the
  xs = n;
  xd = n;

  // Find the closest smaller number
  while (even(xs) != odd(xs))
    xs--;

  // Find the closest bigger number
  while (even(xd) != odd(xd))
    xd++;

  // Find which is closer
  if (xd - n < n - xs)
    cout << xd;
  else if (n - xs < xd - n)
    cout << xs;
  else
    cout << "Equally distant" << xs << " " << xd;

  return 0;
}
