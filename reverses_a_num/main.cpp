/*
Prog description: Reverses the
digits in my number and moves
all the 0's to the end of the number.
*/
#include <iostream>

using namespace std;

int x, y, p, po;

int main() {
  cout << "x=";
  cin >> x;
  cout << endl;

  p = 1;
  po = 1;
  y = 0;

  while (x != 0) {
    if (x % 10 == 0)
      po = po * 10;
    else
      y = y * 10 + x % 10;
    x = x / 10;
  }

  y = y * po;
  cout << y;

  return 0;
}
